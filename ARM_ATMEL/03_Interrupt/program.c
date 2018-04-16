#include "AT91SAM7SE32.h"

// register unsigned int stack_pointer asm ("r0");
// stack_pointer =  0xd3;

#define DELAY   100000
#define PORT_SH 17


void delay() {
    unsigned int a;

    for (a = 0; a < DELAY; a++) {
        asm("nop");
    }

}

int main() {
    int a;
    int *p;

    p = (int *)0x200000;
    *p = 0;

    *AT91C_PIOA_PER = 0xffffffff;
    *AT91C_PIOA_OER = 0xfffffff0;

    *AT91C_PIOA_PPUER = 0xfffffff0;
    *AT91C_PIOA_MDDR = 0x00000000;
    *AT91C_PIOA_CODR = 0xaaaaaaaa;

    *AT91C_CKGR_MOR = AT91C_CKGR_OSCOUNT | AT91C_CKGR_MOSCEN;       // startup time: 0xff*8 "slow clock" pulse
    *AT91C_PMC_MCKR = AT91C_PMC_CSS_MAIN_CLK | AT91C_PMC_PRES_CLK;
    *AT91C_PMC_PCER = 1 << AT91C_ID_TC0;
    
    *(AT91C_AIC_SMR + AT91C_ID_TC0) = 0;
    *AT91C_AIC_IECR = 0xffffffff;

    *AT91C_TC0_RC = 0x8000;
    *AT91C_TC0_CCR = AT91C_TC_CLKEN;
    *AT91C_TC0_CMR = 4;
    *AT91C_TC0_IER = 1;
    *AT91C_TC0_CCR = AT91C_TC_SWTRG;

    *AT91C_WDTC_WDMR = AT91C_WDTC_WDDIS;

    /* Enable Interrupts */
    asm("mov r0, #0x1f");
    asm("msr cpsr, r0");
    /* ------------------ */

    *AT91C_PIOA_CODR = 0xffffffff;

    for (a = 0;; a++) {    
        delay();
    }

    return 0;
}

// Permissible values for this parameter are: IRQ, FIQ, SWI, ABORT and UNDEF.

void irq() __attribute__ ((interrupt ("IRQ")));

void irq() {
    int *p = (int *) 0x200000;

    (*p)++;
    
    if (!(*p & 8))
        return;
    
    *p = *AT91C_PIOA_ODSR + 1;
    *AT91C_PIOA_CODR = -1;
    *AT91C_PIOA_SODR = *p;

    *p = 0;

    *AT91C_AIC_EOICR = 0xffffffff;
}

