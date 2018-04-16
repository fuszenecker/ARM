#include "AT91SAM7SE32.h"
#include "library.h"

PROTO_MAIN();
PROTO_IRQ();

int ram_func(int) __attribute__ ((section (".data")));

int p = 1;

int main() {
    SETUP_STACKS();

    setup_out_ports(0xffffffff);
    out_clear_all();

    setup_quartz_osc();

    *AT91C_PMC_PCER = 1 << AT91C_ID_TC0;
    *(AT91C_AIC_SMR + AT91C_ID_TC0) = 0;
    *AT91C_AIC_IECR = 1 << AT91C_ID_TC0;

    *AT91C_TC0_RC = 0x8000;
    *AT91C_TC0_CCR = AT91C_TC_CLKEN;
    *AT91C_TC0_CMR = 4;
    *AT91C_TC0_IER = 1;
    *AT91C_TC0_CCR = AT91C_TC_SWTRG;

    disable_wdt();
    enable_interrupts();

    for (;;);
}

void irq() {
    p++;

    if (p & 262144) {
        out_clear_all();
        out_set(0xaaaaaaaa);
    } else {
        out_clear_all();
        out_set(0x55555555);
    }

    acknowledge_interrupt(1 << AT91C_ID_TC0);
}

int ram_func(int a) {
    int b;
    b = 3 << a;
    b |= (b & 1) ? 1 : 2;
    return b;
}

