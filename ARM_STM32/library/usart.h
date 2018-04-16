// ---------------------------------------------------------------------------
// This file contains the prototype of the functions that helps to
// configure and utilize the USART controller.
// ---------------------------------------------------------------------------

#ifndef __USART_H__
#define __USART_H__

#include <stm32f10x_usart.h>

// ---------------------------------------------------------------------------
// Initializes the USART controller using a baud rate value
// ---------------------------------------------------------------------------

int usart_init(unsigned int);

// ---------------------------------------------------------------------------
// Sends a characher through USART.
// ---------------------------------------------------------------------------

int usart_send_char(char ch);

// ---------------------------------------------------------------------------
// Receives a characher through USART.
// ---------------------------------------------------------------------------

char usart_recv_char();

// ---------------------------------------------------------------------------
// Sends a characher string through USART.
// ---------------------------------------------------------------------------

int usart_send_str(char *str);

// ---------------------------------------------------------------------------
// Return with "true" if the USART is ready to send a message,
// else returns with "false".
// ---------------------------------------------------------------------------

int usart_tx_ready();

// ---------------------------------------------------------------------------
// Return with "true" if the USART is ready to receive a message,
// else returns with "false".
// ---------------------------------------------------------------------------

int usart_rx_ready();

#endif

