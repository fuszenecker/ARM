#include "lpc2103.h"
#include "../LPC210x/library.h"

PROTO_MAIN();
PROTO_IRQ();

#define OUTP        (1 << 0)
#define INP         (1 << 1)
#define PUL_LEN     50
#define MIN_D       500
#define MAX_D       2500

void pulse() {
    int c;
    
    IOPIN &= ~OUTP;

    for (c = 0; c < PUL_LEN; c++)
        asm("nop");

    IOPIN |= OUTP;
}

void delay(int val) {
    int c;

    for (c = 0; c < val; c++)
        asm("nop");
}

int main() {
    int c;

    SETUP_STACKS();

    IODIR = 1;
    IOPIN = 1;

    while (1) {
        for(c = MIN_D; c < MAX_D; c += 1) {
            while (!(IOPIN & INP));
            while ((IOPIN & INP));
            delay(c);
            pulse();
        }

        for(; c >= MIN_D; c -= 1) {
            while (!(IOPIN & INP));
            while ((IOPIN & INP));
            delay(c);
            pulse();
        }
    }
}

void irq() {
}
