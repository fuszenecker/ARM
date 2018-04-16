
#ifndef __USART_H__
#define __USART_H__

struct Packet {
    unsigned char dst_id;
    unsigned char src_id;
    unsigned char command;
    unsigned char chsum;
    unsigned int data;
} packet, received_packet;

FILE * setup_usart0(char *tty_name);
int send_packet(FILE *tty, struct Packet *packet);
int receive_packet(FILE *tty, struct Packet *packet);
void calc_checksum(struct Packet *packet);

#endif
