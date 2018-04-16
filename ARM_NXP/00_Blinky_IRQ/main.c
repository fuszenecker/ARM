// ------------------------------------------------------------
//
// This program is a very basic example to test LPC210x
// based test boards. I use few macros to make the code more
// human-readable, because human beings are not very good
// at reading machine-code, hexadecimal numbers, etc. :)
//
// This file and the "LPC210x_library.h" are free software, 
// you can resistrubute and modify them under the terms of
// GNU General Public License published by the
// Free Software Foundation.
//
// I hope this program will be useful. If you have any
// suggestions, don't hesitate to let me know: please write
// an email to
//
//       (1) robert.fuszenecker@gmail.com     or
//       (2) hg8lhs@gmail.com                 or
//       (3) hg8lhs@ha5kfu.hu
//
// May all beings be at ease, may they be released from
// all menthal and physical suffering.
//
// Robert Fuszenecker
// Budapest, 5th May 2007
// HUNGARY
//
// ------------------------------------------------------------

// Keil's header file for LPC2101/02/03 chips
#include "lpc2103.h"

// Useful Library routines
#include "../LPC210x/library.h"

// Non-standard prototypes of main() function and the
// interrupt handler ruoutine
PROTO_MAIN();
PROTO_IRQ();

// Global variables have to be initialised!
unsigned int r0 = 0x55;

// The function started after RESET
int main() {

    // 1st step: ste up stacks for the main program and the 
    // interrupt handler routine. See also the Library file.
    SETUP_STACKS();

    // All ports are outputs
    IODIR = 0xffffffff;

    // Set up interrupt controller:
    // 1. enable the timer interrupt
    // 2. set the timer IRQ handler's address
    // 3. mset up priorities (doesn't matter)
    VICIntEnable = 0x10;
    VICVectAddr0 = (unsigned long) irq;
    VICVectCntl0 = 0x20 | 4;

    // Set up timer0, enable the interrupt request
    T0CTCR = 0;
    T0PR = 0;
    // Interrupt generation interval
    T0MR0 = 1000000;
    T0MCR = 3;
    T0TCR = 1;

    // Enable interrupts in the processor
    enable_interrupts();

    // Endless for() loop. It is the main task :)
    for(;;);
}

void irq() {

    // The last bit will be a flop-flop
    if ((r0++) & 1)
        IOPIN = 0xffffffff;
    else
        IOPIN = 0x00000000;

    // Reset timer0
    T0IR = 1;

    // Ackonledge interrupt, the interrupt controller needs it.
    acknowledge_interrupt();
}
