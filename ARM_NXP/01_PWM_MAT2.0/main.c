#include "lpc2103.h"
#include "../LPC210x/library.h"

PROTO_MAIN();
PROTO_IRQ();

unsigned int r0 = 0x55;
unsigned int value = 1;

int main() {
    SETUP_STACKS();

    IODIR = 0xffffffff;
    IOPIN = 0xaaaaaaaa;

    for (;;) {
        for(value = 0; value < 3300; value++) {
            set_pwm_20(value, 3300);

            for (r0 = 0; r0 < 128; r0++);
        }

        for(; value > 0; value--) {
            set_pwm_20(value, 3300);

            for (r0 = 0; r0 < 128; r0++);
        }
    }
}

void irq() {
}
