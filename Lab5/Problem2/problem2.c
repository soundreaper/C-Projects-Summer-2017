#include <stdio.h>
#include <conio.h>

unsigned int f(unsigned int a)
{
	unsigned int displayMask = 1 << 31;

	unsigned int count = 0;
	for (size_t i = 1; i <= 32; i++)
	{
		if (a & displayMask > 0)
		{
			count++;
		}
		a <<= 1;
	}

	if (count % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void displayBits(unsigned int a)
{
	unsigned int displayMask = 1 << 31;

	printf("%u = ", a);

	for (size_t i = 1; i <= 32; i++)
	{
		putchar(a & displayMask ? '1' : '0');
		a <<= 1;

		if (i % 8 == 0)
		{
			putchar(' ');
		}
	}
}

int main(void)
{
	unsigned int x;

	for (size_t i = 0; i < 1; i++)
	{
		printf("Enter an Non-Negative Integer Value: ");
		scanf("%d", &x);
	}

	printf("\n");
	displayBits(x);
	printf("\n");
	unsigned int even = f(x);
	printf("Is the number of one's even (1) or odd (0)?: %u\n", even);

	getch();
}