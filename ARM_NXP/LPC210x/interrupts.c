#include "lpc2103.h"
#include "library.h"

void inline enable_interrupts() {
    asm("mov r0, #0x5f");           // Interrupt flag: set, ARM mode, Supervisor mode
    asm("msr cpsr, r0");            // Change CPSR
}

void inline disable_interrupts() {
    asm("mov r0, #0xdf");           // Interrupt flag: set, ARM mode, Supervisor mode
    asm("msr cpsr, r0");            // Change CPSR
}

void inline acknowledge_interrupt() {
    VICVectAddr = 0xffffffff;       // Write register
}

