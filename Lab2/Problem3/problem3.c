#include <stdio.h>
#include <conio.h>

int main(void) {
	int i;

	for (i = 0; i < 100; i++) {
		printf("*");

		if ((i+1) % 10 == 0) {
			printf("\n");
		}
	}
}