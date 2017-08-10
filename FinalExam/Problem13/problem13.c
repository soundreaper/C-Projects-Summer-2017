#include <stdio.h>
#include <conio.h>

int main(void) {
	FILE *fPtr;

	fPtr = fopen("one.txt", "w");

	fprintf(fPtr, "Subal");



	getch();
}