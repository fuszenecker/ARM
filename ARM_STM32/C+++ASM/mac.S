Disassembly of section .text:

00000000 <main>:

#define MAC(acch, accl, a, b)    asm("smlal %0, %1, %2, %3" : "=r" (acch), "=r" (accl) : "r" (a), "r" (b))

const int xtab[256] = { 0, 0, 1, 1, 2, 2 };

int main() {
   0:	b410      	push	{r4}
   2:	f8df c024 	ldr.w	ip, [pc, #36]	; 28 <main+0x28>
   6:	f5ad 6d80 	sub.w	sp, sp, #1024	; 0x400
   a:	2100      	movs	r1, #0
   c:	466c      	mov	r4, sp
    signed long acch = 0, accl = 0;
    int t;
    int samples[256];

    for (t = 0; t < 256; t++)
        MAC(acch, accl, samples[t], xtab[t]);
   e:	5862      	ldr	r2, [r4, r1]
  10:	f85c 3001 	ldr.w	r3, [ip, r1]
  14:	3104      	adds	r1, #4
  16:	f5b1 6f80 	cmp.w	r1, #1024	; 0x400
  1a:	fbc2 0303 	smlal	r0, r3, r2, r3
  1e:	d1f6      	bne.n	e <main+0xe>

    return (int) (acch);
}
  20:	f50d 6d80 	add.w	sp, sp, #1024	; 0x400
  24:	bc10      	pop	{r4}
  26:	4770      	bx	lr
  28:	00000000 	.word	0x00000000
