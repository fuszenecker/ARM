#include "AT91SAM7SE32.h"
//#include "lib_AT91SAM7SE32.h"

// register unsigned int stack_pointer asm ("r13");
// stack_pointer =  0x200000 + 8*1024;

#define DELAY   1000000
#define PORT_SH 17

void delay() {
    unsigned int a;

    for (a = 0; a < DELAY; a++) {
        asm("nop");
    }

}

int main() {
    int a;

    // AT91F_PIO_CfgOutput(AT91C_BASE_PIOA, 0xfffffff8);
    *AT91C_PIOA_PER = 0xffffffff;
    *AT91C_PIOA_OER = 0xfffffff0;

    // AT91F_PIO_CfgPullup(AT91C_BASE_PIOA, 0xfffffff8);
    *AT91C_PIOA_PPUER = 0xfffffff0;
    // AT91F_PIO_MultiDriverDisable(AT91C_BASE_PIOA, 0x00000000);
    *AT91C_PIOA_MDDR = 0x00000000;

    *AT91C_CKGR_MOR = AT91C_CKGR_OSCOUNT | AT91C_CKGR_MOSCEN;       // startup time: 0xff*8 "slow clock" pulse
    *AT91C_PMC_MCKR = AT91C_PMC_CSS_MAIN_CLK | AT91C_PMC_PRES_CLK;

    for (a = 0;; a++) {    
        // AT91F_PIO_ClearOutput(AT91C_BASE_PIOA, 0xffffffff);
        *AT91C_PIOA_CODR = 0xffffffff;
        delay();
        // AT91F_PIO_SetOutput(AT91C_BASE_PIOA, 0xaaaaaaaa);
        *AT91C_PIOA_SODR = 0xffffffff;
        delay();
    }

    return 0;
}
