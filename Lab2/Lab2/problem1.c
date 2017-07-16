#include <stdio.h>
#include <conio.h>

int main(void) {

	/*
	Initialize three variables: counter, number, largest = 0

	Create "for loop" that iterates ten times:
		-Needs to ask for 10 numbers
		-Needs to read those numbers and store
		-"if statement" to update largest variable if input number is greater

	Print statement to print the largest number
	*/

	int counter, number, largest = 0;
	
	for (counter = 0; counter < 10; counter++) {
		printf("Enter 10 Numbers (%d): ", counter + 1);
		scanf("%d", &number);

		if (largest < number)
			largest = number;
	}

	printf("\nThe largest number is: %d", largest);

	getch();

}