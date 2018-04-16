#include "lpc2103.h"
#include "../LPC210x/library.h"

PROTO_MAIN();
PROTO_IRQ();

#define LATCH   (1 << 22)
#define SERIN   (1 << 23)
#define CLK     (1 << 24)

void inline wait() {
    int a;

    for (a = 0; a < 100000; a++) 
        asm("nop");
}

int main() {
    int i;
    
    SETUP_STACKS();

    setup_pll(4, 1);

    for (i = 0;; i++) {
        display_num_nl(i % 10);
        display_num_nl((i/10) % 10);
        display_num_nl((i/100) % 10);
        display_num((i/1000) % 10);

        wait();
    }
}

void irq() {
}
