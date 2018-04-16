#include <stm32f10x_lib.h>

void delay() {
    unsigned int counter;

    for (counter = 0; counter < 250000; counter++)
        asm("nop");
}

class A {
    private:
        int a, b;

    public:
        A() {
            a = b = 0x12345678;
        }

        A(int _a, int _b) {
            a = _a;
            b = _b;
        }
};

int main() {
    GPIO_InitTypeDef GPIO_InitStructure;

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
 
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_All;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AIN;
    GPIO_Init(GPIOA, &GPIO_InitStructure);

    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);

    A amida;

    while (1) {
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

