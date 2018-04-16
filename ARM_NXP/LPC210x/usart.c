#include "lpc2103.h"
#include "library.h"

void setup_usart0(unsigned int divisor) {
    if (divisor == 0)
        divisor = 20;       /* Default 9600 bit/sec @ 12 MHz */

    PINSEL0 &= ~0xf;
    PINSEL0 |= 0x5;         /* Initialize Pin Select Block for Tx and Rx */

    U0FCR = 0x7;            /* Enable FIFO's and reset them */
    U0LCR = 0x83;           /* Set DLAB and word length set to 8bits */
    U0DLL = divisor;        /* 20_dec ----> BAUDRATE = 9373 bit/sec [error = 2.34%] */
    U0DLM = 0;              /* Baud rate set to 9600 */
    U0LCR = 0x3;            /* Clear DLAB */
}

void send_char_usart0(int ch) {
    while(!(U0LSR & (1 << 6)));             // Wainting for an empty Transmit Register
    U0THR = ch;                             // Sending data
}

int recv_char_usart0() {
    while(!(U0LSR & 1));                    // Wainting for the next data byte;
    return U0RBR;                           // Receiving data
}

int send_packet(struct Packet *packet) {
    int c;
    unsigned char *packet_ptr = (unsigned char *) packet;

    for (c = 0; c < sizeof(struct Packet); c++) {
        while(!(U0LSR & (1 << 6)));         // Wainting for an empty Transmit Register
                                            // Check if shift value is 5 or 6!!!
        U0THR = packet_ptr[c];              // Sending data
    }

    return 0;
}

//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// Receives a packet
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// Return values:
// 0: Nothing happened
// 1: command packet to us
// 2: answer packet to us
// 3: the packet is to be forwarded
// -1: invalid packet checksum
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

int receive_packet(struct Packet *packet, unsigned char my_id) {
    int c;
    unsigned char *packet_ptr = (unsigned char *) packet;
    unsigned char sum;

    for (c = 0; c < sizeof(struct Packet); c++) {
        while(!(U0LSR & 1));                // Wainting for the next data byte;
        packet_ptr[c] = U0RBR;              // Receiving data
    }

    sum = 0;

    for (c = 0; c < sizeof(struct Packet); c++)        // Calculating checksum
        sum += packet_ptr[c];

    if (sum == 0) {                         // If checksum is 0 (data has been perfectly received)...
        if (packet->dst_id == 0)            // If the packet has been sent to us
            return 1;                       // Needs further processing!

        if (packet->src_id == my_id)        // If it is an answer packet to us
            return 2;

        packet->dst_id--;
        calc_checksum(packet);
        send_packet(packet);                // Send packet to the next station
        return 3;
    } else {
        send_packet(packet);
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

int detect_packet() {
    return (U0LSR & 1);                     // Is there anything in the fifo?
}

