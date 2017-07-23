#include <stdio.h>
#include <conio.h>

#define SIZE 3

void change(int *pIntArr, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		pIntArr[i] = (i+1) * 2;
	}
}

void printArray(int *pIntArr, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		printf("%d\n", pIntArr[i]);
	}
}

int main(void)
{
	int arr[SIZE] = { 1, 2, 3 };

	change(arr, SIZE);

	printArray(arr, SIZE);

	getch();
}