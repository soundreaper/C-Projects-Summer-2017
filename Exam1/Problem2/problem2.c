#include <stdio.h>
#include <conio.h>

int EvenSumLess(int n)
{
	int result = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		if (i % 2 == 0)
		{
			result = result + i;
		}
	}
	return result;
}

void main()
{
	int x;

	printf("Enters a number: ");
	scanf("%d", &x);

	int sum = EvenSumLess(x);

	printf("sum = %d", sum);

	getch();
}