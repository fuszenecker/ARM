/** \file   crt.c
 *  \brief  This is the C runtime preparation file
 *
 *  This code is to set up the environment for the C's main() function.
 */

#define	K		    *1024               /**< Define the amount of "kilo" */
//#define STACK_SIZE	(1 K)
#define STACK_SIZE	(256)

__attribute__((section(".stack")))
unsigned int stack[STACK_SIZE];         /**< The stack of the main process and the exception/interrupt handler */

void _start(void);                      /**< Prototype of the "_start" function */
extern void swcall(void);
extern void irq00(void);
extern int main();

__attribute__((section(".stack_pointer")))
void const *stack_pointer = stack + STACK_SIZE; //< Points to the "begin" of the stack

__attribute__((section(".vectors")))
void (*vectors[])() = { _start, irq00, 0, 0, 0,
                        0, 0, 0, 0, 0,
                        swcall
};

/** \brief This is the function that will be started before all others.
 *
 *  \param void This function dowsn't have any parameters
 *
 */

void _start() {
    while (1)
	    main();
}

