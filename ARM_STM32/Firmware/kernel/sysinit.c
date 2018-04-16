#include <config.h>
#include <sysinit.h>
#include <clock.h>
#include <gpio.h>
#include <systick.h>
#include <sched.h>

#include <servers_init.h>
#include <apps_init.h>

__attribute__((section(".stack_pointer")))
void *stack_pointer = (void *) (RAM_BASE + MAIN_STACK);

__attribute__((section(".vectors")))
void (*vectors[])() = { sysinit, 0, 0, 0, 0,
                        0, 0, 0, 0, 0,
                        swcall, 0, 0, 0, scheduler
};

void delay() {
    for (;;)
        asm("nop");
}

extern t_process process_table[MAX_PROCESSES];

void sysinit() {
    clock_enable_main_osc();
    clock_enable_pll();
    gpio_init();
    systick_init(4);

    process_table[1].stack_pointer = 0x20001000;
    unsigned int *psp = &(process_table[1].stack_pointer);

    psp[0] = 0x55000000;
    psp[1] = 0x55000001;
    psp[2] = 0x55000002;
    psp[3] = 0x55000003;
    psp[4] = 0x55000012;
    psp[5] = 0x55000014;
    psp[6] = (unsigned int) delay;
    psp[7] = 0x01000000;

//     servers_init();
//     apps_init();


//    asm("mov r0, %0" : : "i" (RAM_BASE));
//    asm("add r0, %0" : : "i" (PROC_STACK(1)));
//    asm("msr psp, r0");

/*
    asm("mrs r0, control");
    asm("mov r1, #1");
    asm("orr r0, r0, r1");
    asm("msr control, r0");
*/

//    asm("svc 1");
//    asm("push {r0}");

//    asm("mrs r0, control");
//    asm("mov r1, #3");
//    asm("orr r0, r0, r1");
//    asm("msr control, r0");

//    asm("svc 1");
//    asm("push {r0}");

    while (1)
        delay();
}

