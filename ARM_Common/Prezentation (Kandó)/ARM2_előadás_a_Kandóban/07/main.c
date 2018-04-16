#include <hw_types.h>
#include <hw_memmap.h>
#include <hw_gpio.h>
#include <lm3s8971.h>
#include <gpio.h>
#include <systick.h>
#include <sysctl.h>
#include <interrupt.h>

#define	DELAY	1000000

volatile unsigned int pin_data;

void systick_handler()
{
	pin_data = GPIO_PIN_3 - pin_data;
	GPIOPinWrite(GPIO_PORTA_BASE, GPIO_PIN_3, pin_data);
}

int main()
{
	int c;
	pin_data = 0;

	SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
	GPIOPadConfigSet(GPIO_PORTA_BASE, GPIO_PIN_3, GPIO_STRENGTH_8MA, GPIO_PIN_TYPE_OD);
	GPIOPinTypeGPIOOutput(GPIO_PORTA_BASE, GPIO_PIN_3);

	SysTickPeriodSet(3000000);
	// SysTickIntRegister(systick_handler);
	SysTickIntEnable();
	SysTickEnable();
	IntMasterEnable();

	for (c = 0;; c++)
		asm("wfi");
	
	return 0;
}
