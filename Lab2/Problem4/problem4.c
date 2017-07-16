#include <stdio.h>
#include <conio.h>

int main(void) {

	int i, x;

	for (i = 1; i <= 10; i++) {
		for (x = 1; x <= i; x++) {
			printf("%s", "*");
		}
		printf("\n");
	}

	for (i = 10; i >= 1; i--) {
		for (x = 1; x <= i; x++) {
			printf("%s", "*");
		}
		printf("\n");
	}

	for (i = 10; i >= 1; i--) {
		for (x = 9; x >= i; x--) {
			printf("%s", " ");
		}
		for (x = 1; x <= i; x++) {
			printf("%s", "*");
		}
		printf("\n");
	}

	for (i = 1; i <= 10; i++) {
		for (x = 9; x >= i; x--) {
			printf("%s", " ");
		}
		for (x = 1; x <= i; x++) {
			printf("%s", "*");
		}
		printf("\n");
	}

	getch();

}