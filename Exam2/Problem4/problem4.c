#include <stdio.h>
#include <conio.h>

void main()
{
	int num;
	int *numPtr;

	numPtr = &num;

	for (size_t i = 0; i < 1; i++)
	{
		printf("Enter Value: ");
		scanf("%d", &numPtr);
	}

	int x = numPtr;
	x = x * 2;

	numPtr = x;

	printf("Value of num variable: %d\n", numPtr);

	getch();
}