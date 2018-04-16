/* ---------------------------------------------------------------------------
 * This file contains the startup code for the ARM-Cortex microcontroller.
 * ------------------------------------------------------------------------ */

#include <config.h>
#include <sysinit.h>

/* ---------------------------------------------------------------------------
 * The first word of the FLASH should be the initial stack pointer of the
 * microcontroller.
 * This parameter will be in the ".stack_pointer" section.
 * See also: linker script
 * ------------------------------------------------------------------------ */

__attribute__((section(".stack_pointer")))
void *stack_pointer = (void *) (MAIN_STACK);

/* ---------------------------------------------------------------------------
 * The next words should be pointers to ISRs (Interrupt Service Routines).
 * These parameters will be placed into the ".vectors" section.
 * See also: linker script
 * ------------------------------------------------------------------------ */

__attribute__((section(".vectors")))
void (*vectors[])() = { sysinit, 0, 0, 0, 0,
                        0, 0, 0, 0, 0,
                        0, 0, 0, 0, 0
};

/* ---------------------------------------------------------------------------
 * The function will be started after RESET.
 * ------------------------------------------------------------------------ */

void sysinit() {
    unsigned char *ptr;

    /* Initialize ".data" section with binary 0s */
    for (ptr = (unsigned char *)RAM_BASE; ptr < (unsigned char *)(MAIN_STACK); ptr++)
        *ptr = 0;

    /* Main loop increments a counter */

    for (;;)
        asm("nop");
}

