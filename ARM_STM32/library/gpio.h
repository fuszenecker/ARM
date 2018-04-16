// ---------------------------------------------------------------------------
// This header file contains the function prototypes for General Purpose
// Input-Output ports.
// ---------------------------------------------------------------------------

#ifndef __GPIO_H__
#define __GPIO_H__

// ---------------------------------------------------------------------------
// This function initializes the PORT B port.
// ---------------------------------------------------------------------------

void gpio_init();
void gpioa_init();

// ---------------------------------------------------------------------------
// Sets the bits of PORTB according to "data"
// PORTB |= data
// ---------------------------------------------------------------------------

void gpio_set(unsigned int data);
void gpioa_set(unsigned int data);

// ---------------------------------------------------------------------------
// Clears the bits of PORTB according to "data"
// PORTB &= ~data
// ---------------------------------------------------------------------------

void gpio_clear(unsigned int data);
void gpioa_clear(unsigned int data);

#endif
