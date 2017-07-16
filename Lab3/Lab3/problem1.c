#include <stdio.h>
#include <conio.h>

#define SIZE 7

int main(void)
{
	int midterm[SIZE];
	int final[SIZE];
	double result[SIZE];
	double sum=0.0;
	double classAverage;

	printf("Midterm:\n");
	for (size_t i = 0; i < SIZE; i++)
	{
		printf("Enter Student %d Grade (0-100) for Midterm: ", i+1);
		scanf("%d", &midterm[i]);
	}

	printf("\nFinal:\n");
	for (size_t j = 0; j < SIZE; j++)
	{
		printf("Enter Student %d Grade (0-100) for Final: ", j + 1);
		scanf("%d", &final[j]);
	}

	printf("\nResults:\n");
	for (size_t k = 0; k < SIZE; k++)
	{
		result[k] = (midterm[k] + final[k]) / 2;
		sum += result[k];
		printf("Student %d Resulting Grade: %lf\n", k+1, result[k]);
	}

	classAverage = sum / SIZE;
	printf("\nClass Average = %.2lf", classAverage);

	printf("\nScore Difference:\n");
	for (size_t l = 0; l < SIZE; l++)
	{
		printf("%7.2lf\t%7.2lf\n", result[l], result[l] - classAverage);
	}

	getch();
}