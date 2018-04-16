#include "lpc2103.h"
#include "../LPC210x/library.h"

PROTO_MAIN();
PROTO_IRQ();

// How to run MINICOM: minicom -c on
// How to run ser2net: ser2net -c ser2net.conf; telnet localhost 8000

// Terminal control (ESCAPE) sequences:
// ------------------------------------
// \x1b[31m     - Set foreground colour (31 -> 1 means red)
// \x1b[45m     - Set background colour (45 -> 5 means magenta)
// \x1b[2J      - Clear screen
// \x1b[0K      - Clear line from the cursor
// \x1b[1K      - Clear line from beginning of line to cursor
// \x1b[2K      - Clear line
// \x1b[0;0H    - Move cursor to (0;0), top left corner
// \x0A         - Line feed
// \x0D         - Cursor return
//
// Character Attrinutes:
// ---------------------
// \x1b[0m      - Normal character attributes (none)
// \x1b[1m      - Bold
// \x1b[4m      - Underlined
// \x1b[5m      - Blink
// \x1b[7m      - Inverse

#define     CLK     (1 << 24)
#define     SERIN1  (1 << 23)
#define     SERIN2  (1 << 9)
#define     LATCH   (1 << 22)

extern char menu[];
extern char menu_item_1[];
extern char menu_item_2[];
extern char menu_item_test[];
extern char menu_item_default[];
extern char menu_cont[];

extern char test_info[];

extern char display_info[];
extern char display_prompt[];

void print(char *str) {
    int i = 0;

    while (str[i])
        send_char_usart0(str[i++]);
}

void io_test() {
    char ch;

    print(test_info);
    
    IODIR |= LATCH | SERIN1 | SERIN2 | CLK;       // They are outputs
    IOPIN &= ~(LATCH | SERIN1 | SERIN2 | CLK);    // With default value 000_bin

    do {
        if (IOPIN & SERIN1)
            send_char_usart0('1');
        else
            send_char_usart0('0');

        send_char_usart0(' ');

        if (IOPIN & SERIN2)
            send_char_usart0('1');
        else
            send_char_usart0('0');

        send_char_usart0(' ');

        if (IOPIN & CLK)
            send_char_usart0('1');
        else
            send_char_usart0('0');

        send_char_usart0(' ');

        if (IOPIN & LATCH)
            send_char_usart0('1');
        else
            send_char_usart0('0');

        send_char_usart0(13);
        send_char_usart0(10);

        ch = recv_char_usart0();

        switch (ch) {
            case 'i':
                IOPIN ^= SERIN1;
                break;
            case 'j':
                IOPIN ^= SERIN2;
                break;
            case 'c':
                IOPIN ^= CLK;
                break;
            case 'l':
                IOPIN ^= LATCH;
                break;
            default:
                send_char_usart0(7);
                break;
        }
    } while (ch != 0x1b);
}

void display_test() {
    char ch[4];
    int i;

    print(display_info);
    
    for (;;) {
        print(display_prompt);
        
        for (i = 0; i < 4; i++) {
            ch[i] = recv_char_usart0();

            if (ch[i] == 0x1b)
                return;
            
            send_char_usart0(ch[i]);
        }

        send_char_usart0(13);
        send_char_usart0(10);

        for (i = 3; i >= 0; i--) {
            switch (ch[i]) {
                case '0':
                case '1':
                case '2':
                case '3':
                case '4':
                case '5':
                case '6':
                case '7':
                case '8':
                case '9':
                    display_num(ch[i] - '0');
                    break;
                case '-':
                    display_num(10);
                    break;
                case 'F':
                case 'f':
                    display_num(11);
                    break;
                case 'E':
                case 'e':
                    display_num(12);
                    break;
                case 'U':
                case 'u':
                case 'V':
                case 'v':
                    display_num(13);
                    break;
                case 'N':
                case 'n':
                    display_num(14);
                    break;
                default:
                    display_num(-1);
                    break;
            }
        }
    }
}

int main() {
    char ans;
    SETUP_STACKS();

    setup_usart0(20);

    while(1) {
        print(menu);
        ans = recv_char_usart0();
        send_char_usart0(ans);
        send_char_usart0(13);
        send_char_usart0(10);

        switch (ans) {
            case 't':
                print(menu_item_test);
                io_test();
                break;
            case 'd':
                display_test();
                break;
            case '1':
                print(menu_item_1);
                break;
            case '2':
                print(menu_item_2);
                break;
            default:
                print(menu_item_default);
                break;
        }

        print(menu_cont);
        recv_char_usart0();
    }
}

void irq() {
}
