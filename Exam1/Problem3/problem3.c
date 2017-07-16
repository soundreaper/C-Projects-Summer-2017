#include <stdio.h>
#include <conio.h>

int Big(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return largest;
}

void main()
{
	int x, y, z;

	printf("Enter 3 Numbers: ");
	scanf("%d %d %d", &x, &y, &z);
	int biggest = Big(x, y, z);

	printf("largest = %d", biggest);

	getch();
}