const int tab[] = {
    1, 2, 3, 4, 5,
    6, 7, 8, 9, 10
};

int non_const_tab[] = {
    256, 257, 258, 258, 259,
    260, 261, 262, 263, 264
};

class A {
    private:
        int u;
 
    public:
        A() {
            u = 89;
        }
        int f() {
            return u;
        }

        int g() { return f(); };

        int t(int a, int b, int c, int d) {
            return u = int_div(c + d, (a - b));
        }

        inline int int_div(signed int a, signed int b) {
            register signed int result;
            asm("sdiv %0, %1, %2" : "=r" (result) : "r" (a), "r" (b));
            return result;
        }
} t;

int main() {
    t.t(0x11, 0x12, 0x13, t.int_div(3, 5));
    return tab[t.g()] + non_const_tab[t.f()];
}
