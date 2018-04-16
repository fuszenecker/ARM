    .global menu
    .global menu_item_1
    .global menu_item_2
    .global menu_item_test
    .global menu_item_default
    .global menu_cont

    .global test_info

    .global display_info
    .global display_prompt

    .text

menu:
    .ascii "\x1b[2J\x1b[0;0H\x1b[1m\x1b[37m\x1b[44m\x1b[2K"
    .ascii "ARM Menu Version I. Written by Robert Fuszenecker <robert.fuszenecker@gmail.com> in 2007."
    .ascii "\x1b[0m\x1b[1m"
    .byte 10, 13
    .byte 10, 13
    .ascii "========================================"
    .byte 10, 13
    .ascii "      Welcome to LPC2xxx ARM menu"
    .byte 10, 13
    .ascii "========================================"
    .byte 10, 13
    .byte 10, 13
    .ascii "Please select one of them:"
    .byte 10, 13
    .ascii "t. IO Port test"
    .byte 10, 13
    .ascii "d. Display test"
    .byte 10, 13
    .ascii "1. Menuitem I."
    .byte 10, 13
    .ascii "2. Menuitem II."
    .byte 10, 13
    .byte 10, 13
    .ascii "Your choice: "
    .byte 0

menu_item_1:
    .ascii "\x1b[32mMenuitem 1 selected.\x1b[37m"
    .byte 10, 13
    .byte 0

menu_item_2:
    .ascii "\x1b[32mMenuitem 2 selected.\x1b[37m"
    .byte 10, 13
    .byte 0

menu_item_test:
    .ascii "\x1b[32mIO test selected.\x1b[37m"
    .byte 10, 13
    .byte 0

menu_item_default:
    .ascii "\x1b[31mYou are stupid. Can't you read?\x1b[37m"
    .byte 10, 13
    .byte 0

test_info:
    .byte 10, 13
    .ascii "\x1b[1mIO test function"
    .byte 10, 13
    .ascii "----------------"
    .byte 10, 13
    .byte 10, 13
    .ascii "i   - Toggle input #1 pin"
    .byte 10, 13
    .ascii "j   - Toggle input #2 pin"
    .byte 10, 13
    .ascii "c   - Toggle clock pin"
    .byte 10, 13
    .ascii "l   - Toggle latch pin"
    .byte 10, 13
    .ascii "ESC - Go back to main manu"
    .byte 10, 13
    .byte 10, 13
    .ascii "I J C L\x1b[0m"
    .byte 10, 13
    .byte 0

display_info:
    .byte 10, 13
    .ascii "Display test function"
    .byte 10, 13
    .ascii "---------------------"
    .byte 10, 13
    .byte 10, 13
    .byte 0

display_prompt:
    .byte 10, 13
    .ascii "Enter a 4 digit string to be displayed!"
    .byte 10, 13
    .ascii "Use can use the following characters: 0 1 2 3 4 5 6 7 8 9 - E F U n"
    .byte 10, 13
    .byte 10, 13
    .ascii "Your choice: "

    .byte 0

menu_cont:
    .byte 10, 13
    .ascii "Press any key to continue..."
    .byte 0


