#ifndef __CAN_H__
#define __CAN_H__

#include <stm32f10x_can.h>

int CAN_init(unsigned int prescaler);
void CAN_set_filter(unsigned int mask, unsigned int id);
int CAN_send(unsigned int id, unsigned int length, unsigned int data_h, unsigned int dala_l);
CanRxMsg *CAN_recv();

#endif
