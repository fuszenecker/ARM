// ---------------------------------------------------------------------------
// This file contains the prototype of the functions that helps to
// configure and utilize CAN controller.
// ---------------------------------------------------------------------------

#ifndef __CAN_H__
#define __CAN_H__

#include <stm32f10x_can.h>

// ---------------------------------------------------------------------------
// Initializes CAN controller using a prescaler value
// ---------------------------------------------------------------------------

int CAN_init(unsigned int prescaler);

// ---------------------------------------------------------------------------
// Doesn't initialize the controller, just changes the prescaler value.
// ---------------------------------------------------------------------------

int CAN_set_prescaler(unsigned int prescaler);

// ---------------------------------------------------------------------------
// Sets the filter mask (Filter: the number if the filter to be used [0..13],
// mask and ID are 29-bit values (0x00000000 ... 0x1fffffff), 
// the MSB is the RTR bit.
// ---------------------------------------------------------------------------

void CAN_set_filter(unsigned int filter, unsigned int mask, unsigned int id);

// ---------------------------------------------------------------------------
// Sends a CAN message. The "id" determines the ID of the message (29 bits),
// "length" contains the number of data bytes to be sent,
// "data_h" and "data_l" are 32 bit values = 8 bytes of data.
// ---------------------------------------------------------------------------

int CAN_send(unsigned int id, unsigned int length, unsigned int data_h, 
    unsigned int dala_l, unsigned int rtr);

// ---------------------------------------------------------------------------
// Gets the information from the CAN RX fifo. The return value is a 
// pointer to the structrure that contains the received and processed data.
// ---------------------------------------------------------------------------

CanRxMsg *CAN_recv();

// ---------------------------------------------------------------------------
// Return with "true" if the CAN MAC is ready to send a message,
// else returns with "false".
// ---------------------------------------------------------------------------

int CAN_tx_ready();

// ---------------------------------------------------------------------------
// Return with "true" if the CAN MAC is ready to receive a message,
// else returns with "false".
// ---------------------------------------------------------------------------

int CAN_rx_ready();

#endif
