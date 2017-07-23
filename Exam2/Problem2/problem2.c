#include <stdio.h>
#include <conio.h>

struct Employee
{
	unsigned int id;
	unsigned int age;

};

void main()
{
	struct Employee employee1;
	struct Employee* employee1Address = &employee1;

	printf("Address = %x", employee1Address);

	getch();
}