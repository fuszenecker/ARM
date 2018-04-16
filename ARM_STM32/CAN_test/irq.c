void irq00(void) __attribute__((__interrupt__));

#define increment 12

void irq00() {
    unsigned char a, b, c, d;

    a = 0x55;
    b = 0xff;
    c = b - a;
    d = 66;

    a = b + c * d;
}
