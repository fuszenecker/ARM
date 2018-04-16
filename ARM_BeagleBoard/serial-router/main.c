#include <stdio.h>
#include <unistd.h>
#include <getopt.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#include "config.h"
#include "socket.h"
#include "serial.h"
#include "log.h"

#define _STR(x)     #x

int main(int argc, char *argv[]) {
    FILE *serial_port, *tcp_socket;
    char *serial_port_name = DEFAULT_SERIAL_PORT;
    unsigned short tcp_port_num = DEFAULT_TCP_PORT;
    unsigned int daemonize = 0;
    char opt, line[1024];
    int tcp_socket_handler = 0;
    unsigned int speed = DEFAULT_SERIAL_SPEED;

    while ((opt = getopt(argc, argv, "h?s:S:p:D")) != -1) {
        switch (opt) {
        case 's':
            serial_port_name = optarg;
            break;
        case 'S':
            speed = atoi(optarg);
            break;
        case 'p':
            tcp_port_num = atoi(optarg);
            break;
        case 'D':
            daemonize = !0;
            break;
        case 'h':
        case '?':
        default:
            fprintf(stderr, "Usage: %s [-h] [-s serial_port_name] [-S speed] [-p tcp_port_num] [-D]\n"
                            "\n"
                            "-h     Print this screen\n"
                            "-s $   Use serial port $ [default: " DEFAULT_SERIAL_PORT "]\n"
                            "-S #   Set the speed of the serial port [default: " _STR(DEFAULT_SERIAL_SPEED) "]\n"
                            "-p #   Use TCP port # [default: "  _STR(DEFAULT_TCP_PORT) "]\n"
                            "-D     Daemonize process [default: no]\n\n", argv[0]);
            exit(EXIT_FAILURE);
        }
    }

    sd_log_init();

    if ((serial_port = serial_port_open(serial_port_name)) == NULL) {
        sd_log("Unable to open serial port!");
        sd_log(strerror(errno));
        exit(EXIT_FAILURE);
    }

    if (serial_port_set_params(serial_port, speed) == -1) {
        sd_log("Unable to set the speed of the serial port!");
        exit(EXIT_FAILURE);
    }

    if ((tcp_socket_handler = tcp_init_socket(tcp_port_num)) < 0) {
        sd_log("Unable to open TCP port!");
        sd_log(strerror(errno));
        exit(EXIT_FAILURE);
    }
    
    sprintf(line, "Listening on TCP port %d, controlling serial port %s", tcp_port_num, serial_port_name);
    sd_log(line);

    if (daemonize)
        switch (fork()) {
        case 0:
            /* Child process */
            break;
        case -1:
            /* fork(2) failed */
            sd_log("Unable to daemonize process!\n");
            exit(EXIT_FAILURE);
        default:
            /* parent process */
            /* fork() returned with the pid of the child process */
            exit(EXIT_SUCCESS);
        }

    do {
        tcp_socket = tcp_accept(tcp_socket_handler);
        tcp_close(tcp_socket);
    } while (1);

    serial_port_close(serial_port);
    tcp_close_socket(tcp_socket_handler);

    exit(EXIT_SUCCESS);
}
