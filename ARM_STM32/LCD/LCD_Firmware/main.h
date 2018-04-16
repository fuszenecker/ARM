/******************** (C) COPYRIGHT 2008 STMicroelectronics ********************
* File Name          : main.h
* Author             : MCD Application Team
* Version            : V1.0.1
* Date               : 09/22/2008
* Description        : Header for main.c module
********************************************************************************
* THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
* WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE TIME.
* AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY DIRECT,
* INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING FROM THE
* CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE CODING
* INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

/* Includes ------------------------------------------------------------------*/
#include "lcd.h"
#include "stm32f10x_it.h"
#include "fsmc_nor.h"
// #include <stdio.h>
// #include <string.h>

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
void STM32_LCD_Demo(void);
void InterruptConfig(void);
void RCC_Config(void);
void NVIC_Config(void);
void GPIO_Config(void);
void SysTick_Config(void);
// void Delay(u32 nCount);
u32 DelayJoyStick(u32 nTime);
void Decrement_TimingDelay(void);
void Set_SELStatus(void);
void CheckBitmapFilesStatus(void);
void IntExtOnOffConfig(FunctionalState NewState);
void ADC_Config(void);

#endif /* __MAIN_H */

/******************* (C) COPYRIGHT 2008 STMicroelectronics *****END OF FILE****/
