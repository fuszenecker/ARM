#include "AT91SAM7S64.h"

#define DELAY   500

void delay() {
    unsigned int a;

    for (a = 0; a < DELAY; a++) {
        asm("nop");
    }
}

int main() {
    *AT91C_PIOA_PER = 0xffffffff;
    *AT91C_PIOA_OER = 0xfffffff0;

    *AT91C_PIOA_PPUER = 0xfffffff0;
    *AT91C_PIOA_MDDR = 0x00000000;

    while (1) {    
        *AT91C_PIOA_CODR = 0xffffffff;
        delay();
        
        *AT91C_PIOA_SODR = 0xaaaaaaaa;
        delay();

        *AT91C_PIOA_SODR = 0x55555555;
        delay();
    }

    return 0;
}
