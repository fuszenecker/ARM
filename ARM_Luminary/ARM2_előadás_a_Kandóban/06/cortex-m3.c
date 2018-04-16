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

__attribute__((section(".stack_pointer")))
void *stack_pointer = (void *) 0x2000fffc;

__attribute__((section(".vectors")))
void (*vectors[])() = {
	_start,
	nmi_handler,
	hard_fault,
	mmu_handler,
	0,
	0,
	0,
	0,
	0,
	0,
	svc_handler,
	0,
	0,
	0,
	systick_handler,
	irq0_handler,
	irq1_handler,
	// and so on...
};

void _start()
{
	unsigned int *p = &_etext, *q = (unsigned int *) &_data;

	// for (; q <= &_edata; *p++ = *q++);

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

