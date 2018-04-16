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
// Stores the value of the "blibking" LED.
// ---------------------------------------------------------------------------

extern volatile unsigned int pwm_duty_cycle;
unsigned int counter;

// ---------------------------------------------------------------------------
// Does some delay according to pwm_value.
// ---------------------------------------------------------------------------

void inline delay() {
    for (counter = 0; counter < pwm_duty_cycle; counter++) {
        asm("nop");
    }
}

// ---------------------------------------------------------------------------
// ISR of the SYSTICK timer (makes the LED blibking).
// ---------------------------------------------------------------------------

void systick() {
    gpioa_clear(PWM_OUT0); delay(); gpioa_set(PWM_OUT0);
    gpioa_clear(PWM_OUT1); delay(); gpioa_clear(PWM_OUT1);
    gpioa_clear(PWM_OUT1); delay(); gpioa_set(PWM_OUT1);
    gpioa_clear(PWM_OUT0); delay(); gpioa_set(PWM_OUT0);
}

