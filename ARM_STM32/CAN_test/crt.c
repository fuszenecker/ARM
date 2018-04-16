#define	K		    *1024
//#define STACK_SIZE	(1 K)
#define STACK_SIZE	(256)

__attribute__((section(".stack")))
unsigned int stack[STACK_SIZE];

void _start(void);
extern void swcall(void);
extern void irq00(void);
extern int main();

__attribute__((section(".vectors")))
unsigned int *stack_pointer = stack + STACK_SIZE; 

__attribute__((section(".vectors")))
void (*vectors[])() = { _start, irq00, 0, 0, 0,
                        0, 0, 0, 0, 0,
                        swcall
};

void _start() {
    while (1)
	    main();
}

