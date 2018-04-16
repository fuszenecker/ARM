// ---------------------------------------------------------------------------
// This file contains the Interrupt Service Routines (ISR) 
// used by the firmware.
// ---------------------------------------------------------------------------

#include <config.h>
#include <gpio.h>
#include <usart.h>

// ---------------------------------------------------------------------------
// PORT B 15 (blibking)
// ---------------------------------------------------------------------------

#define LED_SYSTICK ((1 << 8) | (1 << 9) | (1 << 10) | (1 << 11) | \
                     (1 << 12) | (1 << 13) | (1 << 14) | (1 << 15))

// ---------------------------------------------------------------------------
// Stores the value of the "blibking" LED.
// ---------------------------------------------------------------------------

volatile unsigned int counter;

// ---------------------------------------------------------------------------
// ISR of the SYSTICK timer (makes the LED blibking).
// ---------------------------------------------------------------------------

void systick() {
    counter++;

    if (counter % 2 == 1) {
        gpio_set(LED_SYSTICK);
        gpioa_set(1 << 8);
        usart_send_char('b');
    } else {
        gpio_clear(LED_SYSTICK);
        gpioa_set(1 << 8);
        usart_send_char('.');
    }
}

