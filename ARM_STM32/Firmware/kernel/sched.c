#include <config.h>
#include <sched.h>
#include <gpio.h>
#include <apps_init.h>

volatile unsigned int counter = 1;
unsigned int *psp;
unsigned int **p_psp = &psp;

t_process process_table[MAX_PROCESSES];

volatile unsigned int current_process;
volatile unsigned int *registers;

__attribute__((naked))
void scheduler();

void scheduler() {
    asm("push {r4-r11}");

    current_process = 0;
    registers = process_table[current_process].registers+8;
    psp = &(process_table[current_process].stack_pointer);

    asm("ldr r0, %0" :: "m" (registers));
    asm("ldmia sp!, {r4-r11}");
    asm("stmdb r0!, {r4-r11}");

    asm("ldr r0, %0" :: "m" (p_psp));
    asm("mrs r1, psp");
    asm("str r1, [r0]");

//    asm("str r0, %0" : "=m" (sched_sp) : );

    counter++;
/*
    task2_sp = (unsigned int *) (RAM_BASE + PROC_STACK(1));

    *(--task2_sp) = 0x01000000;   // xpsr
    *(--task2_sp) = (unsigned int) other1;   // pc
    *(--task2_sp) = 0x14;   // lr
    *(--task2_sp) = 0x12;   // r12
    *(--task2_sp) = 0x3;    // r3
    *(--task2_sp) = 0x2;    // r2
    *(--task2_sp) = 0x1;    // r1
    *(--task2_sp) = 0x0;    // r0
    *(--task2_sp) = 0x4;    // r4
    *(--task2_sp) = 0x5;    // r5
    *(--task2_sp) = 0x6;    // r6
    *(--task2_sp) = 0x7;    // r7
    *(--task2_sp) = 0x8;    // r8
    *(--task2_sp) = 0x9;    // r9
    *(--task2_sp) = 0x10;    // r10
    *(--task2_sp) = 0x11;    // r11
*/
    if (counter & 1) {
        gpio_set(15);
    } else {
        gpio_clear(15);
    }

    current_process = 1;
    registers = process_table[current_process].registers;
    psp = &(process_table[current_process].stack_pointer);

    asm("ldr r0, %0" :: "m" (registers));
    asm("ldmia r0!, {r4-r11}");
    asm("stmdb sp!, {r4-r11}");

    asm("ldr r0, %0" :: "m" (p_psp));
    asm("ldr r1, [r0]");
    asm("msr psp, r1");

    asm("ldr r0, #1");
    asm("msr control, r0");

    asm("mov lr, 0xfffffffd");
    asm("bx lr");

/*
    sched_sp = (unsigned int) (task2_sp);
    asm("mov r0, #1");
    asm("msr control, r0");
    asm("ldr r0, %0" :: "m" (sched_sp));
    asm("msr msp, r0");
    asm("add r0, #0x20");
    asm("msr psp, r0");
    asm("pop {r4-r11}");
    asm("mov lr, 0xfffffffd");
    asm("bx lr");
*/
}
