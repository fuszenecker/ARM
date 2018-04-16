// ---------------------------------------------------------------------------
// This header file contains the function prototypes for SYSTICK timer.
// ---------------------------------------------------------------------------

#ifndef __NVIC_H__
#define __NVIC_H__

#include <stm32f10x_nvic.h>
#include <stm32f10x_lib.h>

// ---------------------------------------------------------------------------
// This function initializes the SYSTICK timer. The "freq" contains the
// "FREQUENCY" of the timer interrupt
// ---------------------------------------------------------------------------

int systick_init(unsigned int freq);

#endif
