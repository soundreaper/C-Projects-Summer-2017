#include <stdio.h>
#include <conio.h>

struct customer
{
	char lastName[15];
	char firstName[15];
	unsigned int customerNumber;

	struct {
		char phoneNumber[11];
		char address[50];
		char city[15];
		char state[3];
		char zipCode[6];
	} personal;
} customerRecord, *customerPtr;

void main()
{
	customerPtr = &customerRecord;
	
	strcpy(customerRecord.lastName, "Pant");
	printf("Last Name: %s\n", customerPtr->lastName);

	strcpy(customerRecord.firstName, "Subal");
	printf("First Name: %s\n", customerPtr->firstName);

	customerRecord.customerNumber = 25;
	printf("Customer Number: %d\n", customerPtr->customerNumber);

	strcpy(customerRecord.personal.phoneNumber, "555-555-5555");
	printf("Phone Number: %s\n", customerPtr->personal.phoneNumber);

	strcpy(customerRecord.personal.address, "1 Hacker Way");
	printf("Address: %s\n", customerPtr->personal.address);

	strcpy(customerRecord.personal.city, "Menlo Park");
	printf("City: %s\n", customerPtr->personal.city);

	strcpy(customerRecord.personal.state, "CA");
	printf("State: %s\n", customerPtr->personal.state);

	strcpy(customerRecord.personal.zipCode, "94025");
	printf("Zip Code: %s\n", customerPtr->personal.zipCode);

	getch();
}

/*

10.6
a) customerRecord.lastName
b) customerPtr->lastName
c) customerRecord.firstName
d) customerPtr->firstName
e) customerRecord.customerNumber
f) customerPtr->customerNumber
g) customerRecord.personal.phoneNumber
h) customerPtr->personal.phoneNumber
i) customerRecord.personal.address
j) customerPtr->personal.address
k) customerRecord.personal.city
l) customerPtr->personal.city
m) customerRecord.personal.state
n) customerPtr->personal.state
o) customerRecord.personal.zipCode
p) customerPtr->personal.zipCode

*/