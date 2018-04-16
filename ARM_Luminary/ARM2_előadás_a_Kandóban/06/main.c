#include <hw_types.h>
#include <hw_memmap.h>
#include <hw_gpio.h>
#include <lm3s8971.h>
#include <gpio.h>
#include <sysctl.h>

#define	DELAY	1000000

volatile unsigned int g = 0xdeadbeef;

void delay(int d)
{
	int z;

	for (z = 0; z < DELAY; z++)
		asm("nop");
}

int main()
{
	int c;

	SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
	GPIOPadConfigSet(GPIO_PORTA_BASE, GPIO_PIN_3, GPIO_STRENGTH_8MA, GPIO_PIN_TYPE_OD);
	GPIOPinTypeGPIOOutput(GPIO_PORTA_BASE, GPIO_PIN_3);

	for (c = 0;; c++) {
		GPIOPinWrite(GPIO_PORTA_BASE, GPIO_PIN_3, GPIO_PIN_3);
		delay(c);
		GPIOPinWrite(GPIO_PORTA_BASE, GPIO_PIN_3, 0);
		delay(c);
	}
	
	return 0;
}
