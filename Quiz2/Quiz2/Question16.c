#include <stdio.h>
#include <conio.h>

#define SIZE 10

void readValues(double arr[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		printf("Enter Value %d: ", i + 1);
		scanf("%lf", &arr[i]);
	}

	return arr;
}

void displayValues(double arr[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		printf("%lf\n", arr[i]);
	}
}

double getAverageValue(double arr[], int size)
{
	double sum = 0.0;
	double average = 0.0;
	for (size_t i = 0; i < size; i++)
	{
		sum += arr[i];
		average = sum / size;
	}
	return average;
}

void main()
{
	double value[SIZE];
	readValues(value, SIZE);
	printf("\n");
	displayValues(value, SIZE);
	printf("\n");
	double average = getAverageValue(value, SIZE);
	printf("Average = %lf\n", average);

	getch();
}