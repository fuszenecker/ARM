// ---------------------------------------------------------------------------
// This file contains the startup code for the ARM-Cortex microcontroller.
// ---------------------------------------------------------------------------

#include <config.h>
#include <queue.h>
#include <main.h>
#include <sysinit.h>

#include <clock.h>
#include <gpio.h>
#include <usart.h>
#include <systick.h>
#include <irq.h>
#include <can.h>
#include <can_cmd.h>

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
    no_handler, no_handler, usart_rx_handler, no_handler, no_handler,
};

// ---------------------------------------------------------------------------
// When a non-expected interrupt or exception occurs,
// this routine will "halt" the CPU.
// ---------------------------------------------------------------------------

void no_handler() {
    for(;;);
}

// ---------------------------------------------------------------------------
// Queues to the CAN and USART routines.
// ---------------------------------------------------------------------------

t_queue usart2can;
t_queue can2usart;
const unsigned int f_cpu = CLOCK_FREQ * PLL_FACTOR;

// ---------------------------------------------------------------------------
// The function will be started after RESET.
// ---------------------------------------------------------------------------

void sysinit() {
    // Structure to configure Interrupt Controller
    NVIC_InitTypeDef NVIC_InitStructure;

    // Clean RAM area
    unsigned char *p;
    
    for (p = (unsigned char *) RAM_BASE; 
            p < ((unsigned char *) RAM_BASE + RAM_SIZE); p++)
        *p = 0;
    
    // Enable main (Quartz) oscillator
    clock_enable_main_osc();
    // Enable PLL: see also PLL_MUL and PLL_DIV constants
    clock_enable_pll();

    // Low level initialization of the GPIO ports
    gpio_init();
    // Low level initialization of the USART
    usart_init(USART_BAUDRATE);
    // Low level initialization of the CAN
    CAN_init(f_cpu / 32 / CAN_BAUDRATE - 1);
    CAN_set_filter(0, 0, 0);

    // Initialize global variables (flags and queues)
    cr_needed = line_len = 0;
    queue_init(&usart2can);
    queue_init(&can2usart);

    // Initialization of the Systick Timer
    // Parameter: period time: 1/n sec, where "n" is the parameter
    systick_init(4);

    // Enable the USART1 Interrupt
    NVIC_InitStructure.NVIC_IRQChannel = USART1_IRQChannel;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
    USART_ITConfig(USART1, USART_IT_RXNE, ENABLE);

    // Enable CAN RX0 interrupt IRQ channel
    NVIC_InitStructure.NVIC_IRQChannel = USB_LP_CAN_RX0_IRQChannel;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);

    // CAN FIFO0 and FIFO1 message pending interrupt enable
    CAN_ITConfig(CAN_IT_FMP0, ENABLE);
    CAN_ITConfig(CAN_IT_FMP1, ENABLE);

    // Finally, the main function will be started
    while (1)
        main();
}

