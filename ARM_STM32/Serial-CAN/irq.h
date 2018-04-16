// ---------------------------------------------------------------------------
// This file contains the ISR function declarations
// ---------------------------------------------------------------------------

#ifndef __IRQ_H__
#define __IRQ_H__

// ISR routine of the SYSTICK timer
void systick();

// ISR of the USART
void usart_rx_handler();

// ISR of the CAN controller
void CAN_rx_handler();

extern unsigned int line_len;
extern unsigned int cr_needed;

#endif
