#define	K		    *1024
#define STACK_SIZE  (8 K)

void _start(void);
extern int main();

__attribute__((section(".stack_pointer")))
const unsigned int stack_pointer = (0x2000000 + STACK_SIZE);

__attribute__((section(".vectors")))
void (*vectors[])() = { _start, 0, 0, 0, 0,
                        0, 0, 0, 0, 0,
};

void _start() {
    while (1)
	    main();
}

