#include "lpc2103.h"
#include "../LPC210x/library.h"

PROTO_MAIN();
PROTO_IRQ();

#define S1      (1 << 22)
#define S2      (1 << 23)
#define S3      (1 << 24)

void inline wait() {
    int a;

    for (a = 0; a < 1000; a++) 
        asm("nop");
}

int main() {
    SETUP_STACKS();

    IODIR = S1 | S2 | S3;

    IOPIN = 0;

    while (1) {
        IOPIN |= S1;
        wait();

        IOPIN &= ~S3;
        wait();

        IOPIN |= S2;
        wait();

        IOPIN &= ~S1;
        wait();

        IOPIN |= S3;
        wait();

        IOPIN &= ~S2;
        wait();
    }
}

void irq() {
}
