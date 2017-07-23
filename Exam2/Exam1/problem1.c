#include <stdio.h>
#include <conio.h>

struct Employee
{
	unsigned int id;
	unsigned int age;

};

void getAddress(struct Employee* employee1Address)
{
	for (size_t i = 0; i < 1; i++)
	{
		printf("Enter ID (Must be 6 Digits): ");
		scanf("%d", &employee1Address->id);
	}

	for (size_t i = 0; i < 1; i++)
	{
		printf("Enter Age (1-999): ");
		scanf("%d", &employee1Address->age);
	}

	return employee1Address;
}

void main()
{
	struct Employee employee1;
	getAddress(&employee1);

	printf("\nID: %d", employee1.id);
	printf("\nAge: %d", employee1.age);

	getch();
}