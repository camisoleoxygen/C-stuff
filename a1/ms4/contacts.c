/* -------------------------------------------
Name: Julian Synn

Email: jsynn@myseneca.ca
Section: IPC144SWW
Date: Nov 30, 2017
----------------------------------------------
Assignment: 1
Milestone: 4
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
// to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:
#include "contacts.h"


// Get and store from standard input the values for Name
// Put your code here that defines the Contact getName function:


void getName(struct Name *name) {
	char ask[2] = { 0 };


	printf("Please enter the contact's first name: ");
	scanf("%30s", name->firstName);
	

	ask[0] = 1;
	do {


		printf("Do you want to enter a middle initial(s)? (y or n): ");
		scanf("%1s", ask);

		if (ask[0] == 'y' || ask[0] == 'Y') {
			printf("Please enter the contact's middle initial(s): ");
			scanf("%6s", name->middleInitial);
			ask[0] = 0;
		}

		else if (ask[0] == 'n' || ask[0] == 'N') {
			ask[0] = 0;
		}

		else {
			ask[0] = 1;
		}
	} while (ask[0]);


	printf("Please enter the contact's last name: ");
	scanf("%35s", name->lastName);

}



// Get and store from standard input the values for Address
// Put your code here that defines the Contact getAddress function:
void getAddress(struct Address *address) {
	char ask[2] = { 0 };

	printf("Please enter the contact's street number: ");
	scanf("%d", &address->streetNumber);
	//ampersand added because it's an integer. strings don't have ampersands.

	printf("Please enter the contact's street name: ");
	scanf("%40s", address->street);


	ask[0] = 1;
	do {
		printf("Do you want to enter an apartment number? (y or n): ");
		scanf("%1s", ask);

		if (ask[0] == 'y' || ask[0] == 'Y') {
			printf("Please enter the contact's apartment number: ");
			scanf("%d", &address->apartmentNumber);
			ask[0] = 0;
		}
		else if (ask[0] == 'n' || ask[0] == 'N') {
			ask[0] = 0;
		}
		else {
			ask[0] = 1;
		}
	} while (ask[0]);


	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]", address->postalCode);


	printf("Please enter the contact's city: ");
	scanf("%40s", address->city);
}






// Get and store from standard input the values for Numbers
// Put your code here that defines the Contact getNumbers function:
void getNumbers(struct Numbers* numbers) {
	char ask[2] = { 0 };


	ask[0] = 1;
	do {
		printf("Do you want to enter a cell phone number? (y or n): ");
		scanf("%1s", ask);

		if (ask[0] == 'y' || ask[0] == 'Y') {
			printf("Please enter the contact's cell phone number: ");
			scanf("%20s", numbers->cellnumber);
			ask[0] = 0;
		}
		else if (ask[0] == 'n' || ask[0] == 'N') {
			ask[0] = 0;
			
		}
		else {
			ask[0] = 1;
		}
	} while (ask[0]);


	ask[0] = 1;
	do {
		printf("Do you want to enter a home phone number? (y or n): ");
		scanf("%1s", ask);

		if (ask[0] == 'y' || ask[0] == 'Y') {
			printf("Please enter the contact's home phone number: ");
			scanf("%20s", numbers->homenumber);
			ask[0] = 0;
		}
		else if (ask[0] == 'n' || ask[0] == 'N') {
			ask[0] = 0;
		}
		else {
			ask[0] = 1;
		}
	} while (ask[0]);



	ask[0] = 1;
	do {
		printf("Do you want to enter a business phone number? (y or n): ");
		scanf("%1s", ask);

		if (ask[0] == 'y' || ask[0] == 'Y') {
			printf("Please enter the contact's business phone number: ");
			scanf("%20s", numbers->businessnumber);
			ask[0] = 0;
		}
		else if (ask[0] == 'n' || ask[0] == 'N') {
			ask[0] = 0;
		}
		else {
			ask[0] = 1;
		}
	} while (ask[0]);
}
