#include <stdio.h>
#include <conio.h>

int main(void)
{
	int num1, num2; //Declaring variables to store numbers

	printf("Enter the First Integer: "); //1st Integer Prompt
	scanf("%d", &num1); //Reading 1st Value into num1

	printf("Enter the Second Integer: "); //2nd Integer Prompt
	scanf("%d", &num2); //Reading 2nd Value into num2

	int sum; //Declare Sum Variable
	sum = num1 + num2; //Perform Addition

	printf("Sum: %d", sum); //Print Sum

	getch(); //Just to keep console window open after running in Visual Studios
}