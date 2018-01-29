/***********************************************************
// OOP244 Workshop 2: Dynamic Memory
// File Kingdom.h
// Version 1.0
// Date: Jan 29, 2018
// Author: Hoh-il Synn
// Description: OOP244 in-lab 2
//
//
// Revision History
///////////////////////////////////////////////////////////
// Name     Date    Reason
//
///////////////////////////////////////////////////////////
***********************************************************/

// TODO: header safeguards
#ifndef SICT_KINGDOM_H
#define SICT_KINGDOM_H

// TODO: sict namespace
namespace sict {
	// TODO: define the structure Kingdom in the sict namespace

	struct Kingdom {
		char m_name[32]; //*
		int m_population;
	};
	// TODO: declare the function display(...),
	//         also in the sict namespace

	void display(const Kingdom &);
}








#endif