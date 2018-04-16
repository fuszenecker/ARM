
void _start();
void nmi_handler();
void mmu_handler();
void svc_handler();
void systick_handler();
void irq0_handler();
void irq1_handler();

extern int main();

__attribute__((section(".stack_pointer")))
void *stack_pointer = (void *) 0x2000fffc;

__attribute__((section(".vectors")))
void (*vectors[])() = {
	_start,
	nmi_handler,
	0,
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
	for (;;)
		main();
}

void nmi_handler()
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

