#include <stdio.h>
#include <conio.h>

int main(void)
{
	double num1, num2, num3, num4; //Declaring variables to store numbers

	printf("Enter the First Number: "); //1st Integer Prompt
	scanf("%lf", &num1); //Reading 1st Value into num1

	printf("Enter the Second Number: "); //2nd Integer Prompt
	scanf("%lf", &num2); //Reading 2nd Value into num2

	printf("Enter the Third Number: "); //3rd Integer Prompt
	scanf("%lf", &num3); //Reading 3rd Value into num3

	printf("Enter the Fourth Number: "); //4th Integer Prompt
	scanf("%lf", &num4); //Reading 4th Value into num4

	double avg; //Declare Average Variable
	avg = (num1 + num2 + num3 + num4)/4; //Perform Average

	printf("Average: %lf", avg); //Print Average

	getch(); //Just to keep console window open after running in Visual Studios
}