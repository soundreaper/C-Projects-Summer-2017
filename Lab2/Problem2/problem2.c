#include <stdio.h>
#include <conio.h>

int main(void) {

	int i;
	
	printf("N\t\t10*N\t\t100*N\t\t1000*N\n");

	for (i = 0; i < 10; i++) {
		printf("\n%d\t\t%d\t\t%d\t\t%d", i+1, (i+1) * 10, (i + 1) * 100, (i + 1) * 1000);
	}

	getch();

}