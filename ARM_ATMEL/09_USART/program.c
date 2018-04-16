#include "AT91SAM7SE32.h"
#include "../include/library.h"

PROTO_MAIN();
PROTO_IRQ();

int main() {
    SETUP_STACKS();

    int character;

    disable_wdt();
    setup_quartz_osc();
    setup_usart0(120);

    for (;;) {
        character = recv_char_usart0();
        put_char_usart0(character);
    }
}

void irq() {
    acknowledge_interrupt(0);
}

