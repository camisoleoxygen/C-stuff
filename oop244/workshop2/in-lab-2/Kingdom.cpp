/***********************************************************
// OOP244 Workshop 2: Dynamic Memory
// File Kingdom.cpp
// Version 1.0
// Date: Jan 29, 2018
// Author: Hoh-il Synn	
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
#include "Kingdom.h"
#include <iostream>
using namespace std;

// TODO: the sict namespace
namespace sict {
	// TODO:definition for display(...) 

	void display(const Kingdom &Kingdom) {
		
		cout << Kingdom.m_name << ", population " << Kingdom.m_population << endl;
	}
}


