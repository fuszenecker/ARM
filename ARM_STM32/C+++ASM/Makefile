all:
	/opt/arm/bin/arm-elf-gcc -mcpu=cortex-m3 -mthumb -nostdlib -Ta.ld  -Wall -g -o a crt.c a.cc -O2
	/opt/arm/bin/arm-elf-objdump -dSh -j .text -j .data -j .bss a > a.list
	/opt/arm/bin/arm-elf-nm a | sort > a.nm
	
