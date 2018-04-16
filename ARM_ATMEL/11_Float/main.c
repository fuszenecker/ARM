// ------------------------------------------------------------
//
// This program is a very basic example to test AT91SAM7
// based test boards. I use few macros to make the code more
// human-readable, because human beings are not very good 
// at reading machine-code, hexadecimal numbers, etc. :)
//
// This file and the "library.h" are free software, you can
// resistrubute and modify them under the terms of
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

#include "AT91SAM7SE32.h"
#include "library.h"

// ------------------------------------------------------------
// Prototypes for main() and irq() (IRQ and FIQ)
// ------------------------------------------------------------

PROTO_MAIN();
PROTO_IRQ();

// ------------------------------------------------------------
// Global variable(s):
// IRQ needs to store a counter value somewhere.
// ------------------------------------------------------------

int p = 1;
float q = 7.56;

// ------------------------------------------------------------
// main(): function to be called after RESET
// ------------------------------------------------------------

int main() {

// ------------------------------------------------------------
// Stack setup: stack is at the end of RAM (0x20000 + 8k)
// Main function has 1k of stack
// IRQ and FIQ has 1k of stack
// ------------------------------------------------------------

    SETUP_STACKS();

    p = (int) q*q;

// ------------------------------------------------------------
// All pins are outputs. You can use all of them to check your
// device if it is working.
// ------------------------------------------------------------

    setup_out_ports(0xffffffff);
    out_clear_all();

// ------------------------------------------------------------
// The easiest way is to use the integrated quartz oscillator,
// I use a quartz with 18.432 MHz without any "extra" capacitor
// ------------------------------------------------------------

    setup_quartz_osc();

// ------------------------------------------------------------
// Timer and interrupt setup, see also ATMEL's AT91SAM7
// documentations, I don't want to speak about it...
// It's not too important to know.
// ------------------------------------------------------------

    *AT91C_PMC_PCER = 1 << AT91C_ID_TC0;

    *(AT91C_AIC_SMR + AT91C_ID_TC0) = 0;
    *AT91C_AIC_IECR = 1 << AT91C_ID_TC0;

    *AT91C_TC0_RC = 0x8000;
    *AT91C_TC0_CCR = AT91C_TC_CLKEN;
    *AT91C_TC0_CMR = 4;
    *AT91C_TC0_IER = 1;
    *AT91C_TC0_CCR = AT91C_TC_SWTRG;

// ------------------------------------------------------------
// Very important to disable Watchdog Timer, because it is
// ENABLED BY DEFAULT, and I hate it!
// Don't say anything, I know that there is a fuse bit that
// can disable WDT, but I hate fuse bits, as well :)
// ------------------------------------------------------------

    disable_wdt();

// ------------------------------------------------------------
// We have to enable interrupts if we want to use them :)
// ------------------------------------------------------------

    enable_interrupts();

// ------------------------------------------------------------
// Endless process, but the interrupt is to come soon...
// ------------------------------------------------------------

    for (;;);
}

// ------------------------------------------------------------
// The Interrupt Service Rutine
// It is necessary to use the GCC specific attribute!
// See also macros.h
// ------------------------------------------------------------

void irq() {

// ------------------------------------------------------------
// We have to say "thank you" to the interrupt controller.
// ------------------------------------------------------------

    acknowledge_interrupt(1 << AT91C_ID_TC0);

// ------------------------------------------------------------
// Counter has to count... It is a tradition.
// ------------------------------------------------------------

    p++;

// ------------------------------------------------------------
// To make the output (LED) changes a bit slower
// ------------------------------------------------------------

    if (p & 262144) {
        out_clear_all();
        out_set(0xaaaaaaaa);
    } else {
        out_clear_all();
        out_set(0x55555555);
    }
}

// ------------------------------------------------------------
// End of Example.
// ------------------------------------------------------------
