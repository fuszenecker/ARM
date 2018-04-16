all:
	arm-none-eabi-gcc -Wall -c -O1 -g3 -mthumb -mcpu=cortex-m3 -o cortex-m3.o cortex-m3.c
	arm-none-eabi-gcc -Wall -c -O1 -g3 -mthumb -mcpu=cortex-m3 -o main.o main.c
	arm-none-eabi-ld -T cortex_m3.ld -o cortex-m3 cortex-m3.o main.o
	arm-none-eabi-objdump -dSh cortex-m3 > cortex-m3.list
