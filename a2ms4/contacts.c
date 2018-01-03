/* -------------------------------------------
Name: Julian (Hoh-il) Synn
Student number: 142176163
Email: jsynn@myseneca.ca
Section: IPC144-SWW
Date: Dec 19, 2017
----------------------------------------------
Assignment: 2
Milestone:  4
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// +-------------------------------------------------+
// | NOTE:  Include additional header files...       |
// +-------------------------------------------------+
#include "contacts.h"
#include "contactHelpers.h"



// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        source code below...                     |
// +-------------------------------------------------+

// getName:
void getName(struct Name *name) {

	int ask = 0;

	//firstn
	printf("Please enter the contact's first name: ");
	scanf("%30[^\n]s", name->firstName);
	clearKeyboard();

	//middlein
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	ask = yes();

	//they say yes
	if (ask == 1) {
		printf("Please enter the contact's middle initial(s): ");
		scanf("%6s", name->middleInitial);
		clearKeyboard();
	}

	//lastn
	printf("Please enter the contact's last name: ");
	scanf("%35[^\n]s", name->lastName);
	clearKeyboard();




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
	clearKeyboard();

	//city
	printf("Please enter the contact's city: ");
	scanf("%40[^\n]s", address->city);
	clearKeyboard();
}



// getNumbers:
// HINT:  Update this function to use the new helper
//        function "getTenDigitPhone" where applicable
void getNumbers(struct Numbers* numbers) {

	int ask;

	printf("Please enter the contact's cell phone number: ");
	getTenDigitPhone(numbers->cellnumber);

	//scanf("%20s", numbers->cell);
	//clearKeyboard();

	//home num
	printf("Do you want to enter a home phone number? (y or n): ");
	ask = yes();

	if (ask == 1) {
		printf("Please enter the contact's home phone number: ");
		getTenDigitPhone(numbers->homenumber);
		//scanf("%20s", numbers->home);
		//clearKeyboard();
	}


	//business num
	printf("Do you want to enter a business phone number? (y or n): ");
	ask = yes();
	if (ask == 1) {
		printf("Please enter the contact's business phone number: ");
		getTenDigitPhone(numbers->businessnumber);
		//scanf("%20s", numbers->business);
		//clearKeyboard();
	}
}



// getContact
void getContact(struct Contacts Contacts[]) {
	getName(&(Contacts->name));
	getAddress(&(Contacts->address));
	getNumbers(&(Contacts->numbers));

}
