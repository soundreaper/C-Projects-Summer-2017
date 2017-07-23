#include <stdio.h>
#include <conio.h>

void displayBits(unsigned int a)
{
	unsigned int displayMask = 1 << 31;

	printf("%u (Forward Sequence) = ", a);

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

void reverseBits(unsigned int a)
{
	unsigned int displayMask = 1;

	printf("%u (Reverse Sequence) = ", a);

	for (size_t i = 1; i <= 32; i++)
	{
		putchar(a & displayMask ? '1' : '0');
		a >>= 1;

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

	displayBits(x);
	printf("\n");
	reverseBits(x);
	printf("\n");

	getch();
}