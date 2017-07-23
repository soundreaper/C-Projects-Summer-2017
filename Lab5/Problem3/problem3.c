#include <stdio.h>
#include <conio.h>

void mult(int *pMultVar)
{
	*pMultVar = *pMultVar * 2;
}

int main(void)
{
	int *pVal = malloc(sizeof(int));

	*pVal = 5;
	printf("Value Before Mult = %d\n", *pVal);

	mult(pVal);
	printf("Value After Mult = %d\n", *pVal);

	free(pVal);
	pVal = NULL;

	if (pVal == NULL)
	{
		printf("pVal dynamic variable was deleted.\n");
	}

	getch();
}

/*
We delete dynamic variables after we are done with them because if the variable is not deleted, it will cause a memory leak.
The Windows OS will reclaim the memory after the program quits.
*/