#include "AT91SAM7S.h"
#include "lib_AT91SAM7S.h"

inline void dbgu_init() {
    AT91F_DBGU_CfgPMC();
    AT91F_DBGU_CfgPIO();
    AT91F_US_Configure((AT91PS_USART) AT91C_BASE_DBGU, 20000000, AT91C_US_ASYNC_MODE, 9600, 0);
    AT91F_US_EnableRx((AT91PS_USART) AT91C_BASE_DBGU);
    AT91F_US_EnableTx((AT91PS_USART) AT91C_BASE_DBGU);
}

inline void dbgu_send_char(char ch) {
    while (!AT91F_US_TxReady((AT91PS_USART) AT91C_BASE_DBGU));
    AT91F_US_PutChar((AT91PS_USART) AT91C_BASE_DBGU, ch);
}

inline char dbgu_recv_char() {
    while (!AT91F_US_RxReady((AT91PS_USART) AT91C_BASE_DBGU));
    return AT91F_US_GetChar((AT91PS_USART) AT91C_BASE_DBGU);
}

inline void dbgu_send_hex(unsigned int value) {
    extern char xtab[];

    dbgu_send_char(xtab[(value >> 28) & 0xf]);
    dbgu_send_char(xtab[(value >> 24) & 0xf]);
    dbgu_send_char(xtab[(value >> 20) & 0xf]);
    dbgu_send_char(xtab[(value >> 16) & 0xf]);
    dbgu_send_char(xtab[(value >> 12) & 0xf]);
    dbgu_send_char(xtab[(value >> 8) & 0xf]);
    dbgu_send_char(xtab[(value >> 4) & 0xf]);
    dbgu_send_char(xtab[(value >> 0) & 0xf]);
}

struct Packet {
    unsigned char dst;
    unsigned char command;
    unsigned char param;
    unsigned char chsum;
};

inline void calc_checksum(struct Packet *packet) {
    unsigned char sum;
    unsigned char *packet_ptr = (unsigned char *) packet;
    int c;

    packet->chsum = 0;

    for (c = 0, sum = 0; c < sizeof(struct Packet); c++)
        sum += packet_ptr[c];

    packet->chsum = -sum;
}

inline void dbgu_send_packet(struct Packet *packet) {
    int c;
    unsigned char *packet_ptr = (unsigned char *) packet;

    calc_checksum(packet);
    
    for (c = 0; c < sizeof(struct Packet); c++)
        dbgu_send_char(packet_ptr[c]);
}

inline void dbgu_recv_packet(struct Packet *packet) {
    int c;
    unsigned char *packet_ptr = (unsigned char *) packet;

    while (1) {
        for (c = 0; c < sizeof(struct Packet); c++)
            packet_ptr[c] = dbgu_recv_char();

        switch (packet->dst) {
            case 0:
            case 1:
            case 2:
                return;
            default:
                packet->dst -= 3;
                dbgu_send_packet(packet);
                break;
        }
    }
}
