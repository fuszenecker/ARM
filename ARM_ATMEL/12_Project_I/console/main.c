#include <termios.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <readline/readline.h>
#include <readline/history.h>

#include "usart.h"
#include "commands.h"

#define MAX_TIME    86400
#define MAX_VALUE   3300
#define DELAY       100000

void scan(FILE *tty) {
    struct Packet packet;
    int length, id;

    printf("Available devices: %d\n", length = get_chain_length(tty));

    for (id = 0; id < length; id++) {
        printf(" %3d:  ", id);

        packet.dst = id;
        packet.command = COMM_GET_TYPE << COMM_SHIFT;
        packet.param = 0;
        send_packet(tty, &packet);
        
        receive_packet(tty, &packet);

        switch (packet.param) {
            case TYPE_POWER_SUPPLY:
                printf("Power supply");
                break;
            default:
                printf("Unknown");
                break;
        }

        printf("\n");
    }
}

int main(int argc, char **argv) {
    FILE *tty;
    struct Packet packet;
    char *line;
    char cmd[128];
    int id;
    double param;
    int value;

    if ((tty = setup_usart0("/dev/ttyS0")) == NULL) {
        perror("console:main():setup_usart()");
        return 1;
    }

    printf("\n");
    scan(tty);

    using_history();

    do {
        printf("\n");
        line = readline("Command: ");

        if (line == NULL)
            break;

        if (strlen(line) == 0)
            continue;
        
        add_history(line);

        printf("\n");

        sscanf(line, "%s", cmd);
        
        if (!strcmp(cmd, "scan"))
            scan(tty);

        if (!strcmp(cmd, "psr")) {
            sscanf(line, "%s %d %lf", cmd, &id, &param);
            param *= 10;

            packet.dst = (char) id;
            packet.command = (COMM_SET_OUTPUT_VALUE << COMM_SHIFT) | (((int) param >> 8) & ((1 << COMM_SHIFT) - 1));
            packet.param = (int) param & 0xff;
            send_packet(tty, &packet);
            receive_packet(tty, &packet);
        }

        if (!strcmp(cmd, "pgr")) {
            sscanf(line, "%s %d", cmd, &id);

            packet.dst = (char) id;
            packet.command = (COMM_GET_OUTPUT_VALUE << COMM_SHIFT);
            packet.param = 0;
            send_packet(tty, &packet);
            receive_packet(tty, &packet);

            value = ((packet.command & ((1 << COMM_SHIFT) - 1)) << 8) + packet.param;
            printf("Reference value: %0.2f V.\n", value / 10.0);
        }

        if (!strcmp(cmd, "psc")) {
            sscanf(line, "%s %d %lf", cmd, &id, &param);

            packet.dst = (char) id;
            packet.command = (COMM_SET_CURRENT_LIMIT << COMM_SHIFT) | (((int) param >> 8) & ((1 << COMM_SHIFT) - 1));
            packet.param = (int) param & 0xff;
            send_packet(tty, &packet);
            receive_packet(tty, &packet);
        }

        if (!strcmp(cmd, "pgc")) {
            sscanf(line, "%s %d", cmd, &id);

            packet.dst = (char) id;
            packet.command = (COMM_GET_CURRENT_LIMIT << COMM_SHIFT);
            packet.param = 0;
            send_packet(tty, &packet);
            receive_packet(tty, &packet);

            value = ((packet.command & ((1 << COMM_SHIFT) - 1)) << 8) + packet.param;
            printf("Current limit: %d mA.\n", value);
        }

        if (!strcmp(cmd, "pga0")) {
            sscanf(line, "%s %d", cmd, &id);

            packet.dst = (char) id;
            packet.command = (COMM_GET_ANALOG0 << COMM_SHIFT);
            packet.param = 0;
            send_packet(tty, &packet);
            receive_packet(tty, &packet);

            value = ((packet.command & ((1 << COMM_SHIFT) - 1)) << 8) + packet.param;
            printf("Analog 0 value: %0.2f V.\n", value / 10.0);
        }

        if ((!strcmp(cmd, "pga1")) || (!strcmp(cmd, "pgo"))) {
            sscanf(line, "%s %d", cmd, &id);

            packet.dst = (char) id;
            packet.command = (COMM_GET_ANALOG1 << COMM_SHIFT);
            packet.param = 0;
            send_packet(tty, &packet);
            receive_packet(tty, &packet);

            value = ((packet.command & ((1 << COMM_SHIFT) - 1)) << 8) + packet.param;
            printf("Analog 1 value: %0.2f V.\n", value / 10.0);
        }

        if (!strcmp(cmd, "help")) {
            printf("Commands:\n");
            printf("  help                    - this help\n");
            printf("  quit                    - leave the program\n");
            printf("  exit                    - leave the program\n");
            printf("  scan                    - determines chain length and discoveres devices\n");
            printf("\n");
            printf("  p*                      - power supply commands\n");
            printf("    psr device_id value   - sets reference value (V)\n");
            printf("    pgr device_id         - gets reference value\n");
            printf("    psc device_id value   - sets current limit (mA)\n");
            printf("    pgc device_id         - gets current limit\n");
            printf("    pga0 device_id        - gets analog output value 0\n");
            printf("    pga1 device_id        - gets analog output value 1\n");
            printf("    pgo device_id         - gets output voltage (same as \"pga1\")\n");
        }

    } while (strcmp(cmd, "quit") & strcmp(cmd, "exit"));

    fclose(tty);
    printf("\n");
    return 0;
}
