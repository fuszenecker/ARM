#include <apps_init.h>

void __task2__() {
    for (;;)
        asm("add.w r0, 0x1");
}

void apps_init() {
    for (;;)
        asm("add.w r0, 0x1");
}
