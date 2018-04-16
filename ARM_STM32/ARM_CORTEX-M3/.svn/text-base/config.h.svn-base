/* ---------------------------------------------------------------------------
 * This is a comfiguration file (header file) of the oprtating system.
 * ------------------------------------------------------------------------ */

#ifndef __CONFIG_H__
#define __CONFIG_H__

/* Device version string */

#define DEV_VERSION     "Fuszenecker's serial-CAN converter, release II."

/* The size of the main stack located at the end of the RAM area */
#define	K		        * 1024  /* Definition of "1 kilobyte" */
#define MAX_STR_LEN     64      /* Maximum length of the strings */
#define QUEUE_SIZE      16      /* Entries in the message queues */

/* ---------------------------------------------------------------------------
 * Clock selection
 * ------------------------------------------------------------------------ */

/* Shall the PLL be enablesd */
#define CLOCK_FREQ      12000000

#ifdef STM32
#define PLL_DIV         RCC_PLLSource_HSE_Div1
#define PLL_MUL         RCC_PLLMul_6
#define PLL_FACTOR      6
#endif

/* ---------------------------------------------------------------------------
 * Stack definitions: the origin and the size
 * ------------------------------------------------------------------------ */

#ifdef STM32
#define RAM_BASE        0x20000000
#define RAM_SIZE        (8 K)
#endif

#define MAIN_STACK      (RAM_BASE + RAM_SIZE)

/* ---------------------------------------------------------------------------
 * Few constants of the kernel core
 * ------------------------------------------------------------------------ */

#define CAN_BAUDRATE    25000
#define CAN_RETRIES     16
#define USART_BAUDRATE  115200

#endif
