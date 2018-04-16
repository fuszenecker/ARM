#include <stm32f10x_lib.h>
#include <config.h>

// ---------------------------------------------------------------------------
// This function enables the "main" (Quartz) oscillator
// ---------------------------------------------------------------------------

int clock_enable_main_osc() {
    ErrorStatus HSEStartUpStatus;

    /* RCC system reset(for debug purpose) */
    RCC_DeInit();

    /* Enable HSE */
    RCC_HSEConfig(RCC_HSE_ON);

    /* Wait till HSE is ready */
    HSEStartUpStatus = RCC_WaitForHSEStartUp();

    if (HSEStartUpStatus == SUCCESS) {
        /* Enable Prefetch Buffer */
        FLASH_PrefetchBufferCmd(FLASH_PrefetchBuffer_Enable);
    
        /* HCLK = SYSCLK */
        RCC_HCLKConfig(RCC_SYSCLK_Div1); 
  
        /* PCLK2 = HCLK */
        RCC_PCLK2Config(RCC_HCLK_Div1); 

        /* PCLK1 = HCLK */
        RCC_PCLK1Config(RCC_HCLK_Div1);

        /* Select HSE as system clock source */
        RCC_SYSCLKConfig(RCC_SYSCLKSource_HSE);

        /* Wait till HSE is used as system clock source */
        while(RCC_GetSYSCLKSource() != 0x04);
    
        return 0;
    }

    return 1;
}

// ---------------------------------------------------------------------------
// This function enables the PLL.
// Input parameters are: PLL divisor, PLL multiplier
// The CPU frequency is: f_quartz * PLL_multiplier / PLL_divisor
// ---------------------------------------------------------------------------

int __clock_enable_pll(unsigned int divisor, unsigned int multiplier) {
    FLASH_PrefetchBufferCmd(FLASH_PrefetchBuffer_Enable);

    /* Flash 2 wait state */
    FLASH_SetLatency(FLASH_Latency_2);

    /* HCLK = SYSCLK */
    RCC_HCLKConfig(RCC_SYSCLK_Div1);

    /* PCLK2 = HCLK */
    RCC_PCLK2Config(RCC_HCLK_Div1);

    /* PCLK1 = HCLK/2 */
    RCC_PCLK1Config(RCC_HCLK_Div2);

    /* PLLCLK = 8MHz * 9 = 72 MHz */
    RCC_PLLConfig(divisor, multiplier);

    /* Enable PLL */
    RCC_PLLCmd(ENABLE);

    /* Wait till PLL is ready */
    while(RCC_GetFlagStatus(RCC_FLAG_PLLRDY) == RESET);

    /* Select PLL as system clock source */
    RCC_SYSCLKConfig(RCC_SYSCLKSource_PLLCLK);

    /* Wait till PLL is used as system clock source */
    while(RCC_GetSYSCLKSource() != 0x08);

    return 0;
}

// ---------------------------------------------------------------------------
// This function enables the PLL.
// The CPU frequency is: f_quartz * PLL_multiplier / PLL_divisor
// ---------------------------------------------------------------------------

int clock_enable_pll() {
    __clock_enable_pll(PLL_DIV, PLL_MUL);
    return 0;
}
