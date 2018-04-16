#include <stm32f10x_lib.h>
#include <stm32f10x_can.h>

int main() {
    CanTxMsg msg, *p_msg;
 
    p_msg = &msg;

    msg.StdId = 0x8ff;
    (*p_msg).DLC = 3;
    p_msg->ExtId = 0xffe;

    CAN_Transmit(&msg);
    CAN_Transmit(p_msg);
}

