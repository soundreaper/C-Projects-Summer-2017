#include <stdio.h>
#include <conio.h>

int Score(int n)
{
	char result;

	switch (n)
	{
	case 10:
	case 9:
		result = 'A';
		break;
	case 8:
		result = 'B';
		break;
	case 7:
		result = 'C';
		break;
	case 6:
		result = 'D';
		break;
	default:
		result = 'F';
	}

	return result;
}

void main()
{
	int x;

	printf("Enter a number (0 - 10): ");
	scanf("%d", &x);

	char y = Score(x);

	printf("grade = %c", y);

	getch();
}