volatile unsigned int g = 0xdeadbeef;

void delay(int d)
{
	int z;

	for (z = 0; z < d; z++)
		asm("nop");
}

int main()
{
	int c;

	for (c = 0; c < 10; c++)
		delay(c);
	
	return 0;
}
