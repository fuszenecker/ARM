// ---------------------------------------------------------------------------
// This file contains the startup code for the ARM-Cortex microcontroller.
// ---------------------------------------------------------------------------

#include <config.h>
#include <main.h>
#include <sysinit.h>

#include <clock.h>
#include <gpio.h>
#include <systick.h>
#include <irq.h>

// ---------------------------------------------------------------------------
// The first word of the FLASH should be the initial stack pointer of the
// microcontroller. The value (MAIN_STACK) can be found in "config.h".
// Theoretically, it is a pointer to the end of SRAM.
// This parameter should be placed into the ".stack_pointer" section.
// See also: linker script
// ---------------------------------------------------------------------------

__attribute__((section(".stack_pointer")))
void *stack_pointer = (void *) (MAIN_STACK);

// ---------------------------------------------------------------------------
// The next words should be pointers to ISRs (Interrupt Service Routines).
// These parameters will be placed into the ".vectors" section.
// See also: linker script
// ---------------------------------------------------------------------------

void no_handler();

__attribute__((section(".vectors")))
void (*vectors[])() = { 
    sysinit, no_handler, no_handler, no_handler, no_handler,
    no_handler, no_handler, no_handler, no_handler, no_handler,
    no_handler, no_handler, no_handler, no_handler, systick,
    no_handler, no_handler, no_handler, no_handler, no_handler,
    no_handler, no_handler, no_handler, no_handler, no_handler,
    no_handler, no_handler, no_handler, no_handler, no_handler,
    no_handler, no_handler, no_handler, no_handler, no_handler,
    no_handler, no_handler, no_handler, no_handler, no_handler,
    no_handler, no_handler, no_handler, no_handler, no_handler,
    no_handler, no_handler, no_handler, no_handler, no_handler,
    no_handler, no_handler, no_handler, no_handler, no_handler
};

// ---------------------------------------------------------------------------
// When a non-expected interrupt or exception occurs,
// this routine will "halt" the CPU.
// ---------------------------------------------------------------------------

void no_handler() {
    for(;;);
}

// ---------------------------------------------------------------------------
// Queues to the CAN and USART routines.
// ---------------------------------------------------------------------------

const unsigned int f_cpu = CLOCK_FREQ * PLL_FACTOR;

// ---------------------------------------------------------------------------
// The function will be started after RESET.
// ---------------------------------------------------------------------------

void sysinit() {
    // Enable main (Quartz) oscillator
    clock_enable_main_osc();
    // Enable PLL: see also PLL_MUL and PLL_DIV constants
    clock_enable_pll();

    // Low level initialization of the GPIO ports
    gpio_init();

    // Initialization of the Systick Timer
    // Parameter: period time: 1/n sec, where "n" is the parameter
    systick_init(4);

    // Finally, the main function will be started
    while (1)
        main();
}

