#ifndef __SCHED_H__
#define __SCHED_H__

#include <config.h>

typedef struct {
    unsigned int prio;
    unsigned int prio_counter;
    unsigned int stack_pointer;
    unsigned int registers[8];
    char name[PROC_NAME_LEN];
} t_process;

void scheduler();

#endif

