#ifndef __CLOCK_H__
#define __CLOCK_H__

#include <stm32f10x_lib.h>

// ---------------------------------------------------------------------------
// This function enables the "main" (Quartz) oscillator
// ---------------------------------------------------------------------------

int clock_enable_main_osc();

// ---------------------------------------------------------------------------
// This function enables the PLL.
// Input parameters are: PLL divisor, PLL multiplier
// The CPU frequency is: f_quartz * PLL_multiplier / PLL_divisor
// ---------------------------------------------------------------------------

int __clock_enable_pll(unsigned int divisor, unsigned int multiplier);

// ---------------------------------------------------------------------------
// This function enables the PLL.
// The CPU frequency is: f_quartz * PLL_multiplier / PLL_divisor
// ---------------------------------------------------------------------------

int clock_enable_pll();

#endif
