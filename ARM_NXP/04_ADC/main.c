#include "lpc2103.h"
#include "../LPC210x/library.h"
#include "commands.h"

PROTO_MAIN();
PROTO_IRQ();

unsigned int __temp__ = 0xdeadbeef;
struct Packet packet = {0x04, 0x03, 0x02, 0x01, 0x55aaff00};
unsigned char my_id = 0x1;

int main() {
    SETUP_STACKS();

    IODIR = 0xffffffff;
    IOPIN = 0xaaaaaaaa;

    setup_usart0(0);
    my_id = 0x1;
    
    while(1) {
        if (detect_packet()) {
            if (receive_packet(&packet, my_id) == 1) {
                switch (packet.command) {
                    case COMM_HELLO:
                        break;
                    case COMM_SET_ID:
                        my_id = (unsigned char) (packet.data & 0xff);
                        packet.data = 0xdeadbeef;
                        break;
                    case COMM_GET_ANALOG:
                        packet.data = get_adc3();
                        break;
                }

                packet.dst_id = 0xff;
                calc_checksum(&packet);
                send_packet(&packet);
            }
        }
    }
}

void irq() {
}
