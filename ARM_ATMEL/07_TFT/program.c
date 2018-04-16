#include "AT91SAM7SE32.h"
#include "../include/library.h"

// register unsigned int stack_pointer asm ("r0");
// stack_pointer =  0xd3;

#define DELAY   100000
#define PORT_SH 17

#define CLK     AT91C_PIO_PA7
#define VSYNC   AT91C_PIO_PA8
#define HSYNC   AT91C_PIO_PA9
#define R       AT91C_PIO_PA10
#define G       AT91C_PIO_PA11
#define B       AT91C_PIO_PA12
#define ENABLE  AT91C_PIO_PA13
#define RL      AT91C_PIO_PA14
#define UD      AT91C_PIO_PA15

#define N_HS    10
#define N_VS    10

#define LED0    (1 << 17)
#define LED1    (1 << 18)

// Permissible values for this parameter are: IRQ, FIQ, SWI, ABORT and UNDEF.

PROTO_MAIN();
PROTO_IRQ();
void row();

void row() {
    int c;

    out_clear(HSYNC);

    for (c = 0; c < N_HS; c++) {
        out_set(CLK);
        out_clear(CLK);
    }

    out_set(HSYNC);

    for (c = 0; c < N_HS; c++) {
        out_set(CLK);
        out_clear(CLK);
    }

    out_set(ENABLE);

    for (c = 0; c < N_HS; c++) {
        out_clear(B | G | B);

        if (c & 8) {
            out_set(B | G | B);
        }

        out_set(CLK);
        out_clear(CLK);
    }

    out_clear(ENABLE);

    for (c = 0; c < N_HS; c++) {
        out_set(CLK);
        out_clear(CLK);
    }

    out_clear(HSYNC);
}

int main() {
    SETUP_STACKS();
 
    int col, c;

    setup_out_ports(0xffffffff);
    out_clear_all();
    setup_quartz_osc();
    disable_wdt();
    
    out_set(UD);
    out_clear(RL);

    for (;;) {

        out_clear(VSYNC);
            
        for (c = 0; c < N_VS; c++)
            row();

        out_set(VSYNC);

        for (c = 0; c < N_VS; c++)
            row();

        for (col = 0; col < 600; col++)
            row();

        for (c = 0; c < N_VS; c++)
            row();
    }
}

void irq() {
}

