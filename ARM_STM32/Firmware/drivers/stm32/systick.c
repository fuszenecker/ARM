#include <systick.h>
#include <stm32f10x_lib.h>
#include <stm32f10x_systick.h>

int systick_init(unsigned int period) {
//    NVIC_InitTypeDef NVIC_InitStructure;

//    NVIC_SetVectorTable(NVIC_VectTab_FLASH, 0x0);
    SysTick_SetReload(72000000/9/period);
    SysTick_ITConfig(ENABLE);
    SysTick_CounterCmd(SysTick_Counter_Enable);
    
    return 0;
}
