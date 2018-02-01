/***********************************************************
// OOP244 Workshop 2: Dynamic Memory
// File Kingdom.cpp
// Version 1.0
// Date: Jan 29, 2018
// Author: Hoh-il (Julian) Synn
// Description: OOP244 in-lab 2
//
//
//
// Revision History
///////////////////////////////////////////////////////////
// Name     Date    Reason
//
///////////////////////////////////////////////////////////
***********************************************************/


// TODO: include the necessary headers
#include <iostream>
#include "Kingdom.h"

using namespace std;

// TODO: the sict namespace
namespace sict {

	// TODO:definition for display(...) 

	void display(const Kingdom &Kingdom) {

		cout << Kingdom.m_name << ", population " << Kingdom.m_population << endl;

	}

	void display(const Kingdom* Kingdom, int kingNum) {

		int totalKingdom = 0;

		cout << "------------------------------" << endl;
		cout << "Kingdoms are" << endl;
		cout << "------------------------------" << endl;

		for (int k = 0; k < kingNum; k++) {
			cout << Kingdom[k].m_name << ", population " << Kingdom[k].m_population << endl;
			totalKingdom += Kingdom[k].m_population; // + totalKingdom without the +=

		}
		cout << "------------------------------" << endl;

		cout << "Total population of all Kingdoms: " << totalKingdom << endl;

	}


}