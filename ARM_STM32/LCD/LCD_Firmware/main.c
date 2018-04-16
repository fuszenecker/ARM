/******************** (C) COPYRIGHT 2008 STMicroelectronics ********************
* File Name          : main.c
* Author             : MCD Application Team
* Version            : V1.0.1
* Date               : 09/22/2008
* Description        : Main program body
********************************************************************************
* THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
* WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE TIME.
* AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY DIRECT,
* INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING FROM THE
* CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE CODING
* INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
*******************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include <main.h>
#include <clock.h>
#include <config.h>

/*******************************************************************************
* Function Name  : main
* Description    : Main program.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
int main(void)
{  /* Set the LCD Back Color */
  LCD_SetBackColor(Black);

/*
  LCD_SetTextColor(White);
  LCD_DrawLine(1, 1, 5, Horizontal);
  LCD_DrawLine(1, 1, 5, Vertical);

  LCD_SetTextColor(Green);
  LCD_DrawCircle(0, 0, 80);

  LCD_SetTextColor(Red);
  LCD_DrawRect(0, 0, 40, 20);

  // while(1);
*/
  /* Set the LCD Text Color */

#ifdef TEXT
  LCD_SetTextColor(White);
  
  /* Set the LCD Text Color */
  LCD_DisplayStringLine(Line0, "ricsi#              ");
  LCD_DisplayStringLine(Line1, "                    ");
  LCD_DisplayStringLine(Line2, "                    ");
  LCD_DisplayStringLine(Line3, "                    ");
  LCD_DisplayStringLine(Line4, "                    ");
  LCD_DisplayStringLine(Line5, "                    ");
  LCD_DisplayStringLine(Line6, "Szia Zita!          ");
  LCD_DisplayStringLine(Line7, "La LCD esas tre bona");
  LCD_DisplayStringLine(Line8, "The LCD is very good");
  LCD_DisplayStringLine(Line9, "Das LCD is sehr gut ");
#else
  LCD_WriteBMP(BMP_ADDR);
#endif

  while(1);
}

