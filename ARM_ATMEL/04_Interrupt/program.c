#include "AT91SAM7SE32.h"

// register unsigned int stack_pointer asm ("r0");
// stack_pointer =  0xd3;

#define DELAY   100000
#define PORT_SH 17

#warning "------------------------------------------"
#warning "NEM működik, ne használd!!!"
#warning "------------------------------------------"

PROTO_IRQ();

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
    *AT91C_PIOA_CODR = 0xffffffff;

    *AT91C_CKGR_MOR = AT91C_CKGR_OSCOUNT | AT91C_CKGR_MOSCEN;       // startup time: 0xff*8 "slow clock" pulse
    *AT91C_PMC_MCKR = AT91C_PMC_CSS_MAIN_CLK | AT91C_PMC_PRES_CLK;
    *AT91C_PMC_PCER = 0xffffffff;
    
    *AT91C_AIC_IECR = 0xffffffff;

    *AT91C_RTTC_RTMR = 10000 | AT91C_RTTC_RTTINCIEN | AT91C_RTTC_RTPRES;

    *AT91C_WDTC_WDCR = AT91C_WDTC_WDDIS;

    /* Enable Interrupts */
    asm("mov r0, #0x13");
    asm("msr cpsr, r0");
    /* ------------------ */


    for (a = 0;; a++) {    
        // delay();
    }

    return 0;
}
		    
// IRQ, FIQ, SWI, ABORT and UNDEF.
					
void irq() {
    int *p = (int *) 0x200000;
    int q, r;
//    register int lr asm("lr");
   

    (*p)++;
    
    if (*p >= 1000) {
        r = *AT91C_PIOA_ODSR + 1;
        *AT91C_PIOA_CODR = -1;
        *AT91C_PIOA_SODR = r;

        *p = 0;
    }
    q = *AT91C_AIC_IVR;
    *AT91C_AIC_EOICR = 0xffffffff;
}

