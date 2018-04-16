#include <main.h>
#include <config.h>

#define MAC(acc_h, acc_l, x, y) { \
        asm("ldr r2, %0" : : "m" (x));     \
        asm("ldr r3, %0" : : "m" (y));     \
        asm("ldr r4, %0" : : "m" (acc_h)); \
        asm("ldr r5, %0" : : "m" (acc_l)); \
        asm("smlal r4, r5, r2, r3");     \
        asm __volatile__("str r4, %0" : "=m" (acc_h));\
        asm __volatile__("str r5, %0" : "=m" (acc_l));\
    }

int main() {
    union {
        signed long long accumulator;
        struct {
            unsigned long acc_l, acc_h;
        } parts;
    } acc;
    
    signed int *x = (int *) 0, *y = (int *) 0x20000000, i;

    for (i = 0; i < 1024; i++)
        MAC(acc.parts.acc_h, acc.parts.acc_l, x[i], y[i]);
        // acc.accumulator += x[i] * y[i];
        

    return (acc.parts.acc_h);
}
