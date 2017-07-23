#include <stdio.h>
#include <conio.h>

void main()
{
	double dvar = 25;
	double *dvarPtr;

	dvarPtr = &dvar;

	printf("Value of dvar variable: %lf\n", *dvarPtr);

	getch();
}