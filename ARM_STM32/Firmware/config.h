#ifndef __CONFIG_H__
#define __CONFIG_H__

#define	K		    *1024
#define STACK_SIZE	(1 K)

#define MAX_PROCESSES   16
#define PROC_NAME_LEN   8

#define USE_PLL         1
#define USE_MPU         0

#ifdef __STM32__
#define RAM_BASE        0x20000000
#define RAM_SIZE        (8 K)
#endif

#define MAIN_STACK      RAM_SIZE
#define PROC_STACK(n)   (RAM_SIZE - (n) * STACK_SIZE)

#endif
