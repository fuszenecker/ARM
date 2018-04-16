// ---------------------------------------------------------------------------
// This header file contains the function implementations for SYSTICK timer.
// ---------------------------------------------------------------------------

#include <systick.h>
#include <stm32f10x_lib.h>
#include <stm32f10x_systick.h>
#include <config.h>

// ---------------------------------------------------------------------------
// This function initializes the SYSTICK timer. The period contains the
// "FREQUENCY" of the timer interrupt
// ---------------------------------------------------------------------------

int systick_init(unsigned int freq) {
    SysTick_SetReload(CLOCK_FREQ * PLL_FACTOR / freq / 8);
    SysTick_ITConfig(ENABLE);
    SysTick_CounterCmd(SysTick_Counter_Enable);
    
    return 0;
}
