#define	RAM_SIZE	0x10000

void _start();
void nmi_handler();
void hard_fault();
void mmu_handler();
void svc_handler();
void systick_handler();
void irq0_handler();
void irq1_handler();

extern int main();

extern unsigned int _etext, _data, _edata;

__attribute__((naked, section(".vectors")))
void __vectors()
{
    asm("b _start");
    asm("b _start");
    asm("b _start");
    asm("b _start");
    asm("b _start");
    asm("b _start");
    asm("b _start");
    asm("b _start");
}

void _start()
{
	for (;;)
		main();
}

void nmi_handler()
{
	for(;;);
}

void hard_fault()
{
	for(;;);
}

void mmu_handler()
{
	for(;;);
}

void svc_handler()
{
	for(;;);
}

void systick_handler()
{
	for(;;);
}

void irq0_handler()
{
	for(;;);
}

void irq1_handler()
{
	for(;;);
}

