/* -------------------------------------------
Name: Julian (Hoh-il) Synn
Student number: 142176163
Email: jsynn@myseneca.ca
Section: IPC144-SWW
Date: Dec 10, 2017
----------------------------------------------
Assignment: 2
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


// This source file needs to "know about" the functions you prototyped
//         in the contact helper header file too
// HINT-1: You will want to use the new yes() and getInt() functions to help
//         simplify the data input process and reduce redundant coding
//
// HINT-2: Put the header file name in double quotes so the compiler knows
//         to look for it in the same directory/folder as this source file
//         #include your contactHelpers header file on the next line:
#include "contactHelpers.h"


// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        function definitions below...            |
// +-------------------------------------------------+
//
// HINT:  Update these function to use the helper 
//        functions where applicable (ex: yes() and getInt() )

// getName:
void getName(struct Name *name) {

	int ask = 0;

	//firstn
	printf("Please enter the contact's first name: ");
	scanf("%30s", name->firstName);
	clearKeyboard();

	//middlein
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	ask = yes();

	if (ask == 1) {
		printf("Please enter the contact's middle initial(s): ");
		scanf("%6s", name->middleInitial);
	}

	//lastn
	printf("Please enter the contact's last name: ");
	scanf("%35s", name->lastName);




}


// getAddress:
void getAddress(struct Address *address) {

	int ask = 0;

	//street num
	printf("Please enter the contact's street number: ");
	address->streetNumber = getInt();

	printf("Please enter the contact's street name: ");
	scanf("%[^\n]s", address->street);

	//apartment num
	printf("Do you want to enter an apartment number? (y or n): ");
	clearKeyboard();
	ask = yes();

	if (ask == 1) {
		printf("Please enter the contact's apartment number: ");
		address->apartmentNumber = getInt();
		

	}

	//postal 
	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]", address->postalCode);

	//city
	printf("Please enter the contact's city: ");
	scanf("%40s", address->city);
}





// getNumbers:
// NOTE:  Also modify this function so the cell number is
//        mandatory (don't ask to enter the cell number)
void getNumbers(struct Numbers* numbers) {

	int ask = 0;

	printf("Please enter the contact's cell phone number: ");
	scanf("%20s", numbers->cell);
	clearKeyboard();

	//home num
	printf("Do you want to enter a home phone number? (y or n): ");
	ask = yes();

	if (ask == 1) {
		printf("Please enter the contact's home phone number: ");
		scanf("%20s", numbers->home);
		clearKeyboard();
	}


	//business num
	printf("Do you want to enter a business phone number? (y or n): ");
	ask = yes();
	if (ask == 1) {
		printf("Please enter the contact's business phone number: ");
		scanf("%20s", numbers->business);
		clearKeyboard();
	}
}


// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               | 
// +-------------------------------------------------+

// getContact
void getContact(struct Contact *contact) {
	getName(&(contact->name));
	getAddress(&(contact->address));
	getNumbers(&(contact->numbers));

}