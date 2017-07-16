#include <stdio.h>
#include <conio.h>

double average(int a, int b)
{
	double result;
	result = (a + b) / 2.0;
	return result;
}

void main()
{
	int n1, n2;

	printf("Enters two numbers: ");
	scanf("%d %d", &n1, &n2);

	double sum = average(n1, n2);

	printf("sum = %lf", sum);

	getch();
}