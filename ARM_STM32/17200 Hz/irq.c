// ---------------------------------------------------------------------------
// This file contains the Interrupt Service Routines (ISR) 
// used by the firmware.
// ---------------------------------------------------------------------------

#include <config.h>
#include <gpio.h>

// ---------------------------------------------------------------------------
// PORT B 15 (blibking)
// ---------------------------------------------------------------------------

// #define LED_SYSTICK (1 << 15)
#define PWM_OUT0 (1 << 8)
#define PWM_OUT1 (1 << 10)

// ---------------------------------------------------------------------------
// ISR of the SYSTICK timer (makes the LED blibking).
// ---------------------------------------------------------------------------

volatile unsigned int counter;

void systick() {
    if (counter & 1) {
        gpioa_set(PWM_OUT0); gpioa_clear(PWM_OUT1);
    } else {
        gpioa_set(PWM_OUT1); gpioa_clear(PWM_OUT0);
    }

    counter++;
}

