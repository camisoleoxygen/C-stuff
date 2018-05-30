/* ------------------------------------------------------------------
Name: Julian (Hoh-il) Synn

Email: jsynn@myseneca.ca
Section: IPC144-SWW
Date: Dec 19, 2017
---------------------------------------------------------------------
Assignment: 2
Milestone:  4
---------------------------------------------------------------------
Description: This header file modularizes general helper functions to
help reduce redundant coding for common repetative tasks.
---------------------------------------------------------------------*/


// Hint:  This header file now has functions with parameters referring to 
//        the struct Contact type so be sure to include the contacts.h header:
#include "contacts.h"

//------------------------------------------------------
// Function Prototypes
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        function prototypes here...              |
// +-------------------------------------------------+


// Clear the standard input buffer
// clearKeyboard:
void clearKeyboard(void);

// pause:
int pause(void);

// getInt:
int getInt(void);

// getIntInRange:
int getIntInRange(int, int);

// yes:
int yes(void);

// menu:
int menu(void);

// ContactManagerSystem:
void ContactManagerSystem(void);

//--------------------------------------------------------------------------------------


// Generic function to get a ten-digit phone number (provided for you)
void getTenDigitPhone(char[]);

// findContactIndex (provided for you)
int findContactIndex(const struct Contacts*, int, const char[]);


// displayContactHeader
// put function prototype here:
void displayContactHeader(void);

// displayContactFooter:
// put function prototype here:
void displayContactFooter(int);

// displayContact:
// put function prototype here:
void displayContact(const struct Contacts*);

// displayContacts:
// put function prototype here:
void displayContacts(const struct Contacts*, int);

// searchContacts:
// put function prototype here:
void searchContacts(const struct Contacts*, int);

// addContact:
// put function prototype here:
void addContact(struct Contacts*, int);

// updateContact:
// put function prototype here:
void updateContact(struct Contacts*, int);

// deleteContact:
// put function prototype here:
void deleteContact(struct Contacts*, int);

// sortContacts:
// put function prototype here:
void sortContact(struct Contacts*, int);
