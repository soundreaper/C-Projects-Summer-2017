#include <stdio.h>
#include <conio.h>
#include <float.h>

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

double getMaxValue(double arr[], int size)
{
	double max = DBL_MIN;
	for (size_t i = 0; i < size; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}

double getMinValue(double arr[], int size)
{
	double min = DBL_MAX;
	for (size_t i = 0; i < size; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	return min;
}

double getAverageValue(double arr[], int size)
{
	double sum = 0.0;
	double average = 0.0;
	double difference = 0.0;
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
	double max = getMaxValue(value, SIZE);
	printf("Max Value: %lf\n", max);
	double min = getMinValue(value, SIZE);
	printf("Min Value: %lf\n", min);
	double average = getAverageValue(value, SIZE);
	printf("Average = %lf\n", average);
	printf("Max - Average = %lf\n", max - average);
	printf("Min - Average = %lf", min - average);

	getch();
}