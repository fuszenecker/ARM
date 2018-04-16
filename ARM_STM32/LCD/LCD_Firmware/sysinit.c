// ---------------------------------------------------------------------------
// This file contains the startup code for the ARM-Cortex microcontroller.
// ---------------------------------------------------------------------------

#include <config.h>
#include <main.h>
#include <sysinit.h>

#include <clock.h>
#include <gpio.h>
#include <systick.h>
#include <irq.h>
#include <usart.h>
#include <can.h>

#define MODE_MASK       ((0 << 5) | (1 << 6) | (0 << 7))

// ---------------------------------------------------------------------------
// The first word of the FLASH should be the initial stack pointer of the
// microcontroller. The value (MAIN_STACK) can be found in "config.h".
// Theoretically, it is a pointer to the end of SRAM.
// This parameter should be placed into the ".stack_pointer" section.
// See also: linker script
// ---------------------------------------------------------------------------

__attribute__((section(".stack_pointer")))
void *stack_pointer = (void *) (MAIN_STACK);

// ---------------------------------------------------------------------------
// The next words should be pointers to ISRs (Interrupt Service Routines).
// These parameters will be placed into the ".vectors" section.
// See also: linker script
// ---------------------------------------------------------------------------

void no_handler();
void usart_rx_handler();
void CAN_rx_handler();

__attribute__((section(".vectors")))
void (*vectors[])() = { 
    sysinit, no_handler, no_handler, no_handler, no_handler,
    no_handler, no_handler, no_handler, no_handler, no_handler,
    no_handler, no_handler, no_handler, no_handler, systick,
    no_handler, no_handler, no_handler, no_handler, no_handler,
    no_handler, no_handler, no_handler, no_handler, no_handler,
    no_handler, no_handler, no_handler, no_handler, no_handler,
    no_handler, no_handler, no_handler, no_handler, no_handler,
    CAN_rx_handler, no_handler, no_handler, no_handler, no_handler,
    no_handler, no_handler, no_handler, no_handler, no_handler,
    no_handler, no_handler, no_handler, no_handler, no_handler,
    no_handler, no_handler, usart_rx_handler, usart_rx_handler, no_handler,
};

// ---------------------------------------------------------------------------
// When a non-expected interrupt or exception occurs,
// this routine will "halt" the CPU.
// ---------------------------------------------------------------------------

void no_handler() {
    for(;;);
}

void usart_rx_handler() {
    usart_send_str("Received: ");
    usart_send_char(usart_recv_char());
    usart_send_str("\r\n");
}

void CAN_rx_handler() {
}

/*******************************************************************************
* Function Name  : GPIO_Config
* Description    : Configures the different GPIO ports pins.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void GPIO_Config(void)
{
  GPIO_InitTypeDef GPIO_InitStructure;

  /* Configure PG.07, PG.08, PG.13, PG.14 and PG.15 as input floating */
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_7 | GPIO_Pin_8 | GPIO_Pin_13 | GPIO_Pin_14 | GPIO_Pin_15;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
  GPIO_Init(GPIOG, &GPIO_InitStructure);

  /* Configure PD.03 as input floating */
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
  GPIO_Init(GPIOD, &GPIO_InitStructure);

  /* RIGHT Button */
  GPIO_EXTILineConfig(GPIO_PortSourceGPIOG, GPIO_PinSource13);

  /* LEFT Button */
  GPIO_EXTILineConfig(GPIO_PortSourceGPIOG, GPIO_PinSource14);

  /* DOWN Button */
  GPIO_EXTILineConfig(GPIO_PortSourceGPIOD, GPIO_PinSource3);

  /* UP Button */
  GPIO_EXTILineConfig(GPIO_PortSourceGPIOG, GPIO_PinSource15);

  /* SEL Button */
  GPIO_EXTILineConfig(GPIO_PortSourceGPIOG, GPIO_PinSource7);

  /* KEY Button */
  GPIO_EXTILineConfig(GPIO_PortSourceGPIOG, GPIO_PinSource8);

  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
  GPIO_Init(GPIOG, &GPIO_InitStructure);

  /* Configure PC.04 (ADC Channel14) as analog input -------------------------*/
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AIN;
  GPIO_Init(GPIOC, &GPIO_InitStructure);

  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOF, &GPIO_InitStructure);
  GPIO_SetBits(GPIOF, GPIO_Pin_6);
}

/*******************************************************************************
* Function Name  : ADC_Config
* Description    : Configure the ADC1.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void ADC_Config(void)
{
  ADC_InitTypeDef ADC_InitStructure;

  /* ADC1 configuration ------------------------------------------------------*/
  ADC_InitStructure.ADC_Mode = ADC_Mode_Independent;
  ADC_InitStructure.ADC_ScanConvMode = ENABLE;
  ADC_InitStructure.ADC_ContinuousConvMode = ENABLE;
  ADC_InitStructure.ADC_ExternalTrigConv = ADC_ExternalTrigConv_None;
  ADC_InitStructure.ADC_DataAlign = ADC_DataAlign_Right;
  ADC_InitStructure.ADC_NbrOfChannel = 1;
  ADC_Init(ADC1, &ADC_InitStructure);

  /* ADC1 regular channel14 configuration */ 
  ADC_RegularChannelConfig(ADC1, ADC_Channel_14, 1, ADC_SampleTime_55Cycles5);
 
  /* Enable ADC1 */
  ADC_Cmd(ADC1, ENABLE);
 
  /* Start ADC1 Software Conversion */ 
  ADC_SoftwareStartConvCmd(ADC1, ENABLE);
}

// ---------------------------------------------------------------------------
// Queues to the CAN and USART routines.
// ---------------------------------------------------------------------------

const unsigned int f_cpu = CLOCK_FREQ * PLL_FACTOR;

// ---------------------------------------------------------------------------
// The function will be started after RESET.
// ---------------------------------------------------------------------------

void sysinit() {
    // Structure to configure Interrupt Controller
    NVIC_InitTypeDef NVIC_InitStructure;

    // Enable main (Quartz) oscillator
    clock_enable_main_osc();
    // Enable PLL: see also PLL_MUL and PLL_DIV constants
    clock_enable_pll();

    // Low level initialization of the GPIO ports
    gpio_init();
    gpio_clear(0xffff);
    gpio_set(MODE_MASK);

    /* Enable GPIOA, GPIOB, GPIOC, GPIOD, GPIOE, GPIOF, GPIOG and AFIO clocks */
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA | RCC_APB2Periph_GPIOB |RCC_APB2Periph_GPIOC 
        | RCC_APB2Periph_GPIOD | RCC_APB2Periph_GPIOE | RCC_APB2Periph_GPIOF | RCC_APB2Periph_GPIOG 
        | RCC_APB2Periph_AFIO | RCC_APB2Periph_ADC1, ENABLE);
  
    /* DMA1 and DMA2 clock enable */
    RCC_AHBPeriphClockCmd(RCC_AHBPeriph_DMA1 | RCC_AHBPeriph_DMA2, ENABLE);

    // USART initialization
    gpioa_init();
    gpioa_set(1 << 8);
    usart_init(USART_BAUDRATE);

    // Initialization of the Systick Timer
    // Parameter: period time: 1/n sec, where "n" is the parameter
    systick_init(4);

    // Enable the USART2 Interrupt
    NVIC_InitStructure.NVIC_IRQChannel = USART2_IRQChannel;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
    USART_ITConfig(USART2, USART_IT_RXNE, ENABLE);

    // Low level initialization of the CAN
    CAN_init(f_cpu / 32 / CAN_BAUDRATE - 1);
    CAN_set_filter(0, 0, 0);

    // Enable CAN RX0 interrupt IRQ channel
    NVIC_InitStructure.NVIC_IRQChannel = USB_LP_CAN_RX0_IRQChannel;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);

    // CAN FIFO0 and FIFO1 message pending interrupt enable
    CAN_ITConfig(CAN_IT_FMP0, ENABLE);
    CAN_ITConfig(CAN_IT_FMP1, ENABLE);

    /* GPIO Configuration */
    GPIO_Config();

    /* ADC Configuration */
    ADC_Config();

    /* Initialize the LCD */
    STM3210E_LCD_Init();

    // Finally, the main function will be started
    while (1)
        main();
}


