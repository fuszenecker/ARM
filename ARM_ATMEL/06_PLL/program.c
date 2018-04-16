#include "AT91SAM7SE32.h"
#include "../include/library.h"

// register unsigned int stack_pointer asm ("r0");
// stack_pointer =  0xd3;

#define DELAY   5000000
#define PORT_SH 17
#define LED0    (1 << 17)
#define LED1    (1 << 18)


PROTO_MAIN();
PROTO_IRQ();
void delay();

int main() {
    SETUP_STACKS();
    int a;

    setup_out_ports(LED0 | LED1);
    setup_pll(125, 36);
    disable_wdt();

    out_clear_all();
    out_set(LED0);
    out_set(LED1);

    for (a = 0;; a++) {    
        out_clear_all();
        out_set(LED0);

        delay();

        out_clear_all();
        out_set(LED1);

        delay();
    }
}

void delay() {
    int counter;

    for (counter = 0; counter < DELAY; counter++)
        asm("nop");
}

void irq() {
    acknowledge_interrupt(0);
}

