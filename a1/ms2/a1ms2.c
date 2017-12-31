/* -------------------------------------------
Name: Julian Synn
Student number: 142176163
Email: jsynn@myseneca.ca
Section: IPC144SWW
Date: Oct 27, 2017
----------------------------------------------
Assignment: 1
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:

#include "contacts.h"

int main (void)
{
    // Declare variables here:
	struct Name userName = { '/0', '/0', '/0' };
	struct Address userAddress = { 0, '/0', 0, '/0', '/0' };
	struct Numbers userNumbers = { '/0', '/0', '/0' };

	char yesorNo[2] = { 0 };


    // Display the title
	printf("Contact Management System\n");
	printf("-------------------------\n");


    // ========================Contact Name Input========================
	// First Name
	printf("Please enter the contact's first name: ");
	scanf("%30s", userName.firstName);

	//Middle Initial
	//use switch or if statement to determine if they want a mid initial
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf("%1s", yesorNo);

	if (yesorNo[0] == 'y' || yesorNo[0] == 'Y') {
		printf("Please enter the contact's middle initial(s): ");
		scanf("%6s", userName.middleInitial);
	}

	//Last Name
	printf("Please enter the contact's last name: ");
	scanf("%35s", userName.lastName);






    // ========================Contact Address Input========================
	// Street number
	printf("Please enter the contact's street number: ");
	scanf("%d", &userAddress.streetNumber);

	// Street Name
	printf("Please enter the contact's street name: ");
	scanf("%40s", userAddress.street);



	// Apartment Number
	printf("Do you want to enter an apartment number? (y or n): ");
	scanf("%1s", yesorNo);

	if (yesorNo[0] == 'y' || yesorNo[0] == 'Y') {
		printf("Please enter the contact's apartment number: ");
		scanf("%d", &userAddress.apartmentNumber);
	}




	// Postal Code
	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]", userAddress.postalCode);

	// Contact's City
	printf("Please enter the contact's city: ");
	scanf("%40s", userAddress.city);





    // ========================Contact Numbers Input========================
	// Contact cell phone number
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf("%1s", yesorNo);

	if (yesorNo[0] == 'y' || yesorNo[0] == 'Y') {
		printf("Please enter the contact's cell phone number: ");
		scanf("%20s", userNumbers.cell);
	}

    // Contact home phone number
	printf("Do you want to enter a home phone number? (y or n): ");
	scanf("%1s", yesorNo);

	if (yesorNo[0] == 'y' || yesorNo[0] == 'Y') {
		printf("Please enter the contact's home phone number: ");
		scanf("%20s", userNumbers.home);
	}

	// Contact business number
	printf("Do you want to enter a business phone number? (y or n): ");
	scanf("%1s", yesorNo);

	if (yesorNo[0] == 'y' || yesorNo[0] == 'Y') {
		printf("Please enter the contact's business phone number: ");
		scanf("%20s", userNumbers.business);
	}



    // Display Contact Summary Details
	// do the printf on the below statements

	printf("\nContact Details");
	printf("\n---------------");

	printf("\nName Details");
	printf("\nFirst name: %s", userName.firstName);
	printf("\nMiddle initial(s): %s", userName.middleInitial);
	printf("\nLast name: %s", userName.lastName);

	printf("\n\nAddress Details");
	printf("\nStreet number: %d", userAddress.streetNumber);
	printf("\nStreet name: %s", userAddress.street);
	printf("\nApartment: %d", userAddress.apartmentNumber);
	printf("\nPostal code: %s", userAddress.postalCode);
	printf("\nCity: %s", userAddress.city);
	
	printf("\n\nPhone Numbers:");
	printf("\nCell phone number: %s", userNumbers.cell);
	printf("\nHome phone number: %s", userNumbers.home);
	printf("\nBusiness phone number: %s", userNumbers.business);


    // Display Completion Message
	printf("\n\nStructure test for Name, Address, and Numbers Done!\n");


    return 0;
}

/*  SAMPLE OUTPUT:
    
Contact Management System
-------------------------
Please enter the contact's first name: Tom
Do you want to enter a middle initial(s)? (y or n): y
Please enter the contact's middle initial(s): Wong
Please enter the contact's last name: Song
Please enter the contact's street number: 20
Please enter the contact's street name: Keele
Do you want to enter an appartment number? (y or n): y
Please enter the contact's appartment number: 40
Please enter the contact's postal code: A8A 4J4
Please enter the contact's city: Toronto
Do you want to enter a cell phone number? (y or n): Y
Please enter the contact's cell phone number: 905-111-6666
Do you want to enter a home phone number? (y or n): Y
Please enter the contact's home phone number: 705-222-7777
Do you want to enter a business phone number? (y or n): Y
Please enter the contact's business phone number: 416-333-8888

Contact Details
---------------
Name Details
First name: Tom
Middle initial(s): Wong
Last name: Song

Address Details
Street number: 20
Street name: Keele
Apartment: 40
Postal code: A8A 4J4
City: Toronto

Phone Numbers:
Cell phone number: 905-111-6666
Home phone number: 705-222-7777
Business phone number: 416-333-8888

Structure test for Name, Address, and Numbers Done!
*/