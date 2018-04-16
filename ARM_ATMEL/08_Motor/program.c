#include "AT91SAM7SE32.h"
#include "../include/library.h"

#define PORT_SH     7

PROTO_MAIN();
PROTO_IRQ();

int main() {
    SETUP_STACKS();

    int *p, *motor;

    p = (int *) 0x200000;
    motor = (int *) 0x200004;
    *p = 0;
    *motor = 1;

    setup_out_ports(0xffffffff);
    out_clear_all();

    setup_quartz_osc();

    *AT91C_PMC_PCER = 1 << AT91C_ID_TC0;
    
    *(AT91C_AIC_SMR + AT91C_ID_TC0) = 0;
    *AT91C_AIC_IECR = 0xffffffff;

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
    int *p = (int *) 0x200000;
    int *motor = (int *) 0x200004;

    (*p)++;
    
    if (*p & 4096) {

//        *motor = *motor << 1;

//        if (*motor > 8)
//            *motor = 1;

        switch (*motor) {
            case 1:     *motor = 3; break;
            case 3:     *motor = 2; break;
            case 2:     *motor = 6; break;
            case 6:     *motor = 4; break;
            case 4:     *motor = 5; break;
            case 5:     *motor = 1; break;
            default:    *motor = 1; break;
        }


        out_clear_all();
        out_set((*motor) << PORT_SH);

        *p = 0;
    }

    acknowledge_interrupt(1 << AT91C_ID_TC0);
}

