#include <stm32f10x_lib.h>

void delay() {
    unsigned int counter;

    for (counter = 0; counter < 250000; counter++)
        asm("nop");
}

int main() {
    GPIO_InitTypeDef GPIO_InitStructure;

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
 
    // GPIOA_CRL &= 0xf;
    // GPIOA_CRL |= 0x02;
    // GPIOA_ODR |= 0x0;
//    *(unsigned int *)GPIOA_BASE &= ~0xf;
//    *(unsigned int *)GPIOA_BASE |= 0x2;

    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_All;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AIN;
    GPIO_Init(GPIOA, &GPIO_InitStructure);

    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);

    while (1) {
//        *(unsigned int *)(GPIOA_BASE + 0x0c) &= ~0x1;
//        *(unsigned int *)(GPIOA_BASE + 0x0c) |= 0x1;

        GPIO_SetBits(GPIOA, GPIO_Pin_0);
        delay();

        GPIO_ResetBits(GPIOA, GPIO_Pin_0);
        delay();
    }

    asm("svc #0");
    
    return 0;
}

__attribute__((section(".rodata")))
const char message[] = "Hello! This an ARM Cortex test program\r\n";

