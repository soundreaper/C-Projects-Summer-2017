#include <stdio.h>
#include <conio.h>

int Digits(int n)
{
	int counter = 0;

	while (n != 0)
	{
		n /= 10;
		++counter;
	}

	return counter;
}

void main()
{
	int x;

	printf("Enter a number: ");
	scanf("%d", &x);

	int y = Digits(x);

	printf("digits = %d", y);

	getch();
}