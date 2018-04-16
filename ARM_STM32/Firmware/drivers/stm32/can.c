#include <can.h>
#include <stm32f10x_can.h>
#include <stm32f10x_gpio.h>
#include <stm32f10x_rcc.h>

CanRxMsg RxMessage;
CanTxMsg TxMessage;

int CAN_init(unsigned int prescaler) {
    GPIO_InitTypeDef GPIO_InitStructure;
    CAN_InitTypeDef        CAN_InitStructure;

    /* CAN register init */
    CAN_DeInit();
    CAN_StructInit(&CAN_InitStructure);

    /* CAN Periph clock enable */
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_CAN, ENABLE);
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);

    /* Configure CAN pin: RX */
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
    GPIO_Init(GPIOA, &GPIO_InitStructure);
  
    /* Configure CAN pin: TX */
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);

    /* CAN cell init */
    CAN_InitStructure.CAN_TTCM=DISABLE;
    CAN_InitStructure.CAN_ABOM=DISABLE;
    CAN_InitStructure.CAN_AWUM=DISABLE;
    CAN_InitStructure.CAN_NART=DISABLE;
    CAN_InitStructure.CAN_RFLM=DISABLE;
    CAN_InitStructure.CAN_TXFP=DISABLE;
#ifdef __CAN_LOOPBACK__
    CAN_InitStructure.CAN_Mode=CAN_Mode_LoopBack;
#else
    CAN_InitStructure.CAN_Mode=CAN_Mode_Normal;
#endif
    CAN_InitStructure.CAN_SJW=CAN_SJW_1tq;
    CAN_InitStructure.CAN_BS1=CAN_BS1_8tq;
    CAN_InitStructure.CAN_BS2=CAN_BS2_7tq;
    CAN_InitStructure.CAN_Prescaler=prescaler;
    CAN_Init(&CAN_InitStructure);

    return 0;
}

void CAN_set_filter(unsigned int mask, unsigned int id) {
    CAN_FilterInitTypeDef  CAN_FilterInitStructure;

    /* CAN filter init */
    CAN_FilterInitStructure.CAN_FilterNumber=0;
    CAN_FilterInitStructure.CAN_FilterMode = CAN_FilterMode_IdMask;
    CAN_FilterInitStructure.CAN_FilterScale = CAN_FilterScale_32bit;
    CAN_FilterInitStructure.CAN_FilterIdHigh = id >> 16;
    CAN_FilterInitStructure.CAN_FilterIdLow = id & 0xffff;
    CAN_FilterInitStructure.CAN_FilterMaskIdHigh = mask >> 16;
    CAN_FilterInitStructure.CAN_FilterMaskIdLow = mask & 0xffff;
    CAN_FilterInitStructure.CAN_FilterFIFOAssignment = 0;
    CAN_FilterInitStructure.CAN_FilterActivation = ENABLE;
    CAN_FilterInit(&CAN_FilterInitStructure);
}

int CAN_send(unsigned int id, unsigned int length, unsigned int data_h, unsigned int data_l) {
    unsigned char TransmitMailbox;
    u32 i = 0;

    /* transmit */
    TxMessage.ExtId = id;
    TxMessage.RTR = CAN_RTR_DATA;
    TxMessage.IDE = CAN_ID_EXT;
    TxMessage.DLC = length;
    TxMessage.Data[0] = (data_h >> 24) & 0xff;
    TxMessage.Data[1] = (data_h >> 16) & 0xff;
    TxMessage.Data[2] = (data_h >> 8) & 0xff;
    TxMessage.Data[3] = (data_h >> 0) & 0xff;
    TxMessage.Data[4] = (data_l >> 24) & 0xff;
    TxMessage.Data[5] = (data_l >> 16) & 0xff;
    TxMessage.Data[6] = (data_l >> 8) & 0xff;
    TxMessage.Data[7] = (data_l >> 0) & 0xff;

    TransmitMailbox = CAN_Transmit(&TxMessage);

    i = 0;
    while((CAN_TransmitStatus(TransmitMailbox) != CANTXOK) && (i != 0xFFFF))
        i++;

    i = 0;
    while((CAN_MessagePending(CAN_FIFO0) < 1) && (i != 0xFFFF))
        i++;

    return 0;
}

CanRxMsg *CAN_recv() {
    /* receive */
    RxMessage.StdId=0x00;
    RxMessage.IDE=CAN_ID_EXT;
    RxMessage.DLC=0;
    RxMessage.Data[0]=0x00;
    RxMessage.Data[1]=0x00;
    RxMessage.Data[2]=0x00;
    RxMessage.Data[3]=0x00;
    RxMessage.Data[4]=0x00;
    RxMessage.Data[5]=0x00;
    RxMessage.Data[6]=0x00;
    RxMessage.Data[7]=0x00;

    CAN_Receive(CAN_FIFO0, &RxMessage);

    return &RxMessage;
}
 
