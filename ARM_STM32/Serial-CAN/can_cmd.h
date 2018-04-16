// ---------------------------------------------------------------------------
// This file contains the numeric value of the CAN commands.
// These are used to identify the commmands sent by USART ISR.
// ---------------------------------------------------------------------------

#ifndef __CAN_CMD_H__
#define __CAN_CMD_H__

#define CAN_VERSION     0
#define CAN_INIT        1
#define CAN_SET_BAUD    2
#define CAN_SET_FILTER  3
#define CAN_SET_ID      4
#define CAN_SEND        5
#define CAN_RECV        6
#define USART_SET_BAUD  7
#define GET_FREE_MEM    8
#define CAN_UNKNOWN     -1

#endif
