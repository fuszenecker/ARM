
#include <termios.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/ioctl.h>

//#define TIOCMSET    0x5418

#include "commands.h"
#include "usart.h"

FILE *setup_usart0(char *tty_name) {
    FILE *tty; 
    struct termios term;
    // int ioctl_value = TIOCM_DTR | TIOCM_RTS;

    tty = fopen(tty_name, "r+");

    if (tty == NULL) {
        return NULL;
    }
    
    tcgetattr(fileno(tty), &term);
    cfsetispeed(&term, B9600);
    cfsetospeed(&term, B9600);
    term.c_cflag &= ~(CSIZE|PARENB);
    term.c_cflag |= CS8;
    tcsetattr(fileno(tty), TCSANOW, &term);
    
    // ioctl(fileno(tty), TIOCMSET, &ioctl_value);

    return tty;
}

int send_packet(FILE *tty, struct Packet *packet) {
    calc_checksum(packet);
    fwrite(packet, sizeof(struct Packet), 1,  tty);
    fflush(tty);

#ifdef _DEBUG
    printf("\n\n---- Sent packet ----\n");
    printf("Destination:\t%02X\n", packet->dst);
    printf("Command:\t%02X\n", packet->command);
    printf("Parameter:\t%02X\n", packet->param);
    printf("Checksum:\t%02X\n", packet->chsum);
    fflush(stdout);
#endif

    return 0;
}

int receive_packet(FILE *tty, struct Packet *packet) {
    int c;
    unsigned char *packet_ptr = (unsigned char *) packet;
    unsigned char sum;

    fread(packet, sizeof(struct Packet), 1,  tty);

#ifdef _DEBUG
    printf("\n\n---- Received packet ----\n");
    printf("Destination:\t%02X\n", packet->dst);
    printf("Command:\t%02X\n", packet->command);
    printf("Answer:\t\t%02X\n", packet->param);
    printf("Checksum:\t%02X\n", packet->chsum);
    fflush(stdout);
#endif

    for (c = 0, sum = 0; c < sizeof(struct Packet); c++)        // Calculating checksum
        sum += packet_ptr[c];

    if (sum == 0) {                         // If checksum is 0 (data has been perfectly received)...
#ifdef _DEBUG
        printf("\n\nChecksum OK.");
#endif
    } else {
        printf("\n\nChecksum error!");
        return -1;                          // If the checksum is not correct, make some error report processing
    }

    return 0;
}

void calc_checksum(struct Packet *packet) {
    unsigned char sum;
    unsigned char *packet_ptr = (unsigned char *) packet;
    int c;

    packet->chsum = 0;

    for (c = 0, sum = 0; c < sizeof(struct Packet); c++)        // Calculating checksum
        sum += packet_ptr[c];

    packet->chsum = -sum;
}

int get_chain_length(FILE *tty) {
    struct Packet packet = {0xff, COMM_HELLO << COMM_SHIFT, 0, 1};
    
    send_packet(tty, &packet);
    receive_packet(tty, &packet);

    return 0xff - packet.dst;
}

