#ifndef __CLOCK_H__
#define __CLOCK_H__

#include <stm32f10x_lib.h>

int clock_enable_main_osc();
int __clock_enable_pll(unsigned int divisor, unsigned int multiplier);
int clock_enable_pll();

#endif
