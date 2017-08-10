#include <stdio.h>
#include <conio.h>

int main(void) {
	for (size_t i = 11; i > 0; i--) {
		printf("%d\n", i * 7);
	}

	getch();
}