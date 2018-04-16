
#include <termios.h>
#include <unistd.h>
#include <stdio.h>

#include "usart.h"

FILE *setup_usart0(char *tty_name) {
    FILE *tty; 
    struct termios term;

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
    
    return tty;
}

int send_packet(FILE *tty, struct Packet *packet) {
    fwrite(packet, sizeof(struct Packet), 1,  tty);
    fflush(tty);

    printf("\n\nKÜLDÖTT ------------------------\n");
    printf("Cél:\t\t%02X\n", packet->dst_id);
    printf("Forrás:\t\t%02X\n", packet->src_id);
    printf("Parancs:\t%02X\n", packet->command);
    printf("Összeg:\t\t%02X\n", packet->chsum);
    printf("Adat:\t\t%08X", packet->data);
    fflush(stdout);

    return 0;
}

int receive_packet(FILE *tty, struct Packet *packet) {
    int c;
    unsigned char *packet_ptr = (unsigned char *) packet;
    unsigned char sum;

    fread(packet, sizeof(struct Packet), 1,  tty);

    printf("\n\nFOGADOTT -----------------------\n");
    printf("Cél:\t\t%02X\n", packet->dst_id);
    printf("Forrás:\t\t%02X\n", packet->src_id);
    printf("Parancs:\t%02X\n", packet->command);
    printf("Összeg:\t\t%02X\n", packet->chsum);
    printf("Adat:\t\t%08X", packet->data);
    fflush(stdout);

    for (c = 0, sum = 0; c < 8; c++)        // Calculating checksum
        sum += packet_ptr[c];

    if (sum == 0) {                         // If checksum is 0 (data has been perfectly received)...
        printf("\n\nEllenőrizve.");

        if (packet->dst_id == 0) {          // If the packet has been sent to us
            printf("\nParancs csomag érkezett.");
            return 1;                       // Needs further processing!
        }

        if (packet->src_id == 0) {          // If it is an answer packet to us
            printf("\nVálasz csomag érkezett.");
            return 2;
        }

        printf("\nIsmeretlen csomag! Továbbítva...");
        packet->dst_id--;                   // Else packet has to be forwarded: decrement destination ID
        packet->chsum++;                    // Recalculate checksum
        send_packet(tty, packet);                // Send packet to the next station
        return 3;
    } else {
        printf("\n\nÉrvénytelen csomag!");
        send_packet(tty, packet);
        return -1;                          // If the checksum is not correct, make some error report processing
    }

    return 0;
}

void calc_checksum(struct Packet *packet) {
    unsigned char sum;
    unsigned char *packet_ptr = (unsigned char *) packet;
    int c;

    packet->chsum = 0;

    for (c = 0, sum = 0; c < 8; c++)        // Calculating checksum
        sum += packet_ptr[c];

    packet->chsum = -sum;
}
