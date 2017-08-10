#include <stdio.h>
#include <conio.h>

int main(void) {
	int value;
	
	do {
		printf("Enter a integer value: ");
		scanf("%d", &value);
	} while (value <= 0);

	getch();
}