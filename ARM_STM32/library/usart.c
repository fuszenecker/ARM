// ---------------------------------------------------------------------------
// This file contains the implementation of the functions that helps to
// configure and utilize the USART controller.
// ---------------------------------------------------------------------------

#include <usart.h>
#include <stm32f10x_usart.h>
#include <stm32f10x_gpio.h>
#include <stm32f10x_rcc.h>

// ---------------------------------------------------------------------------
// Initializes the USART controller using a baud rate value
// ---------------------------------------------------------------------------

int usart_init(unsigned int baudrate) {
    USART_InitTypeDef USART_InitStructure;
    GPIO_InitTypeDef GPIO_InitStructure;

    /* Enable USART1, GPIOA and AFIO clocks */
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1 | RCC_APB2Periph_GPIOA | RCC_APB2Periph_AFIO, ENABLE);

    /* Configure USART1 Tx (PA.09) as alternate function push-pull */
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
    GPIO_Init(GPIOA, &GPIO_InitStructure);

    /* Configure USART1 Rx (PA.10) as input floating */
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
    GPIO_Init(GPIOA, &GPIO_InitStructure);

    /* USART and USART2 configured as follow:
        - BaudRate = 115200 baud
        - Word Length = 8 Bits
        - One Stop Bit
        - Even parity
        - Hardware flow control disabled (RTS and CTS signals)
        - Receive and transmit enabled
    */
    USART_InitStructure.USART_BaudRate = baudrate;
    USART_InitStructure.USART_WordLength = USART_WordLength_8b;
    USART_InitStructure.USART_StopBits = USART_StopBits_1;
    USART_InitStructure.USART_Parity = USART_Parity_No;
    USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
    USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;

    /* Configure USART1 */
    USART_Init(USART1, &USART_InitStructure);

    /* Enable the USART1 */
    USART_Cmd(USART1, ENABLE);

    return 0;
}

// ---------------------------------------------------------------------------
// Sends a characher through USART.
// ---------------------------------------------------------------------------

int usart_send_char(char ch) {
    while(USART_GetFlagStatus(USART1, USART_FLAG_TC) == RESET);
    USART_SendData(USART1, ch);

    return 0;
}

int usart_send_char_non_blocking(char ch) {
    if (USART_GetFlagStatus(USART1, USART_FLAG_TC) == RESET);
        return 0x800000;

    USART_SendData(USART1, ch);

    return 0;
}

// ---------------------------------------------------------------------------
// Return with "true" if the USART is ready to send a message,
// else returns with "false".
// ---------------------------------------------------------------------------

int usart_tx_ready() {
    if (USART_GetFlagStatus(USART1, USART_FLAG_TC) == RESET)
        return 0;
    else
        return 1;
}

// ---------------------------------------------------------------------------
// Receives a characher through USART.
// ---------------------------------------------------------------------------

char usart_recv_char() {
    while(USART_GetFlagStatus(USART1, USART_FLAG_RXNE) == RESET);
    return USART_ReceiveData(USART1);
}

// ---------------------------------------------------------------------------
// Return with "true" if the USART is ready to receive a message,
// else returns with "false".
// ---------------------------------------------------------------------------

int usart_rx_ready() {
    if (USART_GetFlagStatus(USART1, USART_FLAG_RXNE) == RESET)
        return 0;
    else
        return 1;
}

// ---------------------------------------------------------------------------
// Sends a characher string through USART.
// ---------------------------------------------------------------------------

int usart_send_str(char *str) {
    unsigned int counter;

    for (counter = 0; str[counter]; counter++)
        usart_send_char(str[counter]);

    return 0;
}
