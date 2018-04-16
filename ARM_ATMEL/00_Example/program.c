#include "at91sam7s32.h"

// register unsigned int stack_pointer asm ("r13");
// stack_pointer =  0x200000 + 8*1024;

#define DELAY   500

int gg = 0x33445566;

void delay() {
    unsigned int a;

    for (a = 0; a < DELAY; a++) {
        asm("nop");
    }

}

int main() {
    *((unsigned int *)PIO_PER) = 0xffffffff;
    *((unsigned int *)PIO_OER) = 0xfffffff0;
    *((unsigned int *)PIO_PUER) = 0xfffffff0;
    *((unsigned int *)PIO_MDDR) = 0x00000000;

    gg = 0x12345678;

    while (1) {    
        *((unsigned int *)PIO_CODR) = 0xffffffff;
        delay();
        *((unsigned int *)PIO_SODR) = 0xaaaaaaaa;
        delay();
        gg++;
    }

    return gg;
}
