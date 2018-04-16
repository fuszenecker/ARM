#include "lpc2103.h"
#include "../LPC210x/library.h"

PROTO_MAIN();
PROTO_IRQ();

extern int pwm_main();

int main() {
    SETUP_STACKS();

    pwm_main();

    for(;;);
}

void irq() {
}
