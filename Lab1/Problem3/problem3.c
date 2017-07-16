#include <stdio.h>
#include <conio.h>

int main(void)
{
	double num1, num2; //Declaring variables to store numbers

	printf("Enter First Number: "); //First Integer Prompt
	scanf("%lf", &num1); //Reading 1st Value Into num1

	printf("Enter Second Number: "); //First Integer Prompt
	scanf("%lf", &num2); //Reading 1st Value Into num2

	if (num1 > num2) {
		printf("%lf is larger.", num1); //If num1 is larger than num2, print num1
	}
	else if (num1 < num2) {
		printf("%lf is larger.", num2); //If num2 is larger than num1, print num2
	}
	else {
		printf("Neither number is larger, both equal: %lf", num1); //If num1 = num, print equal and give value.
	}

	getch(); //Just to keep console window open after running in Visual Studios
}