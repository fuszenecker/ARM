void swcall(void) __attribute__((__interrupt__));

void swcall() {
    asm("push {r0, r1}");
    asm("mrs r0, control");
    asm("mov r1, #3");
    asm("orr r0, r0, r1");
    asm("msr control, r0");
    asm("pop {r0, r1}");
}
