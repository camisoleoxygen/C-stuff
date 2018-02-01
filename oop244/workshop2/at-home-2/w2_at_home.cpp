/***********************************************************
// Workshop 2: Dynamic Memory
// File w2_at_home.cpp
// Version 2.0
// Date Jan 30, 2018
// Author Hoh-il (Julian) Synn
// Description OOP244 at_home_2
// ?????????????????????
//
//
// Revision History
///////////////////////////////////////////////////////////
// Name     Date    Reason
//
///////////////////////////////////////////////////////////
***********************************************************/

#include <iostream>
#include "Kingdom.h"

using namespace std;
using namespace sict;

void read(Kingdom&);

int main() {
	int count = 0; // the number of kingdoms in the array

				   // TODO: declare the pKingdom pointer here (don't forget to initialize it)
	Kingdom* pKingdom = nullptr;
	Kingdom* pKingdom2 = nullptr;


	cout << "==========\n"
		<< "Input data\n"
		<< "==========\n"
		<< "Enter the number of Kingdoms: ";
	cin >> count;
	cin.ignore();

	if (count < 1) return 1;

	// TODO: allocate dynamic memory here for the pKingdom pointer
	pKingdom = new Kingdom[count];


	for (int i = 0; i < count; ++i) {
		cout << "Kingdom #" << i + 1 << ": " << endl;
		// TODO: add code to accept user input for Kingdom i
		read(pKingdom[i]);


	}
	cout << "==========" << endl << endl;

	// testing that "display(...)" works
	cout << "------------------------------" << endl
		<< "The 1st kingdom entered is" << endl
		<< "------------------------------" << endl;
	display(pKingdom[0]);
	cout << "------------------------------" << endl << endl;

	// expand the array of Kingdoms by 1 element
	// TODO: allocate dynamic memory for count + 1 Kingdoms
	pKingdom2 = new Kingdom[count+1];


	// TODO: copy elements from original array into this newly allocated array
	for (int u = 0; u < count; u++) {
		pKingdom2[u] = pKingdom[u];
	}

	// TODO: deallocate the dynamic memory for the original array
	delete[] pKingdom;
	pKingdom = nullptr;

	// TODO: copy the address of the newly allocated array into pKingdom pointer
	pKingdom = pKingdom2;

	// add the new Kingdom
	cout << "==========\n"
		<< "Input data\n"
		<< "==========\n"
		<< "Kingdom #" << count + 1 << ": " << endl;

	// TODO: accept input for the new element in the array
	read(pKingdom[count+1]);

	count++;
	cout << "==========\n" << endl;

	// testing that the overload of "display(...)" works
	display(pKingdom, count);
	cout << endl;

	// TODO: deallocate the dynamic memory here
	delete[] pKingdom;
	pKingdom = nullptr;


	return 0;
}

// read accepts data for a Kingdom from standard input
//
void read(Kingdom& kingdom) {
	cout << "Enter the name of the Kingdom: ";
	cin.get(kingdom.m_name, 32, '\n');
	cin.ignore(2000, '\n');
	cout << "Enter the number of people living in " << kingdom.m_name << ": ";
	cin >> kingdom.m_population;
	cin.ignore(2000, '\n');
}