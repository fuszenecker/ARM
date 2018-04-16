#ifndef __USART_H__
#define __USART_H__

#include <stm32f10x_usart.h>

int usart_init(unsigned int baudrate);
int usart_send_char(char ch);
char usart_recv_char();
int usart_send_str(char *str);

#endif
