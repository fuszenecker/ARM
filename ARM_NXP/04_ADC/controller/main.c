
#include <termios.h>
#include <unistd.h>
#include <stdio.h>

#include "usart.h"
#include "commands.h"

int get_chain_length(FILE *tty) {
    struct Packet packet = {0xff, 0, COMM_HELLO, 1, 0};
    
    send_packet(tty, &packet);
    receive_packet(tty, &packet);

    return 0xff - packet.dst_id;
}

int main() {
    FILE *tty;
    struct Packet packet;
    int length, id;

    if ((tty = setup_usart0("/dev/ttyS0")) == NULL) {
        perror("controller:setup_usart");
        return 1;
    }

    printf("\n\nGyűrű hossza: %d", length = get_chain_length(tty));

    printf("\nAzonosítók kiosztása...");
   
    for (id = 1; id <= length; id++) { 
        packet.dst_id = id - 1;
        packet.src_id = 0;
        packet.command = COMM_SET_ID;
        packet.data = id;
        calc_checksum(&packet);
        send_packet(tty, &packet);
        receive_packet(tty, &packet);
    }

    for (;;) { 
        sleep(1);
        packet.dst_id = 0;
        packet.src_id = 0;
        packet.command = COMM_GET_ANALOG;
        packet.data = 0;
        calc_checksum(&packet);
        send_packet(tty, &packet);
        receive_packet(tty, &packet);
    }

    fclose(tty);
    printf("\n\n");
    return 0;
}
