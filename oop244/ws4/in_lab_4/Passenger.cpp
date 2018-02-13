// TODO: add file header comments here
// Workshop 4 - Constructors - Test Main
// Passenger.cpp
// Hoh-il (Julian) Synn
// Feb 12, 2018

// TODO: add your headers here
#include <cstring>
#include <iostream>
#include "Passenger.h"
//#define _CRT_SECURE_NO_WARNINGS


// TODO: continue your namespace here
using namespace std;

namespace sict {

	// TODO: implement the default constructor here
	Passenger::Passenger() {

		passengerName[0] = '\0';
		destination[0] = '\0';

	}

	// TODO: implement the constructor with 2 parameters here
	Passenger::Passenger(const char* passenger_char, const char* destination_char) {
		//if (passenger_char[0] != '\0' && passenger_char != nullptr && destination_char[0] != '\0'
		//	&& destination_char != nullptr)
			//if (passenger_char == nullptr || destination_char == nullptr)
		if (passenger_char != nullptr && destination_char != nullptr) {
			if (passenger_char[0] != '\0' && destination_char != '\0') {

			strcpy_s(passengerName, passenger_char);
			strcpy_s(destination, destination_char);
			}
			
			else {
				*this = Passenger();
			}

		}
		//else {
		//	passengerName[0] = '\0';
		//	destination[0] = '\0';

		//}
		else {
			*this = Passenger();
		}
		

	}

	// TODO: implement isEmpty query here
	bool Passenger::isEmpty() const {
		return passengerName[0] == '\0';
		//return (*passengerName == 0 && *destination == 0);



	}

	// TODO: implement display query here
	void Passenger::display() const {
		if (isEmpty()) {
			cout << "No passenger!" << endl;
		}

		else {
			cout << passengerName << " - " << destination << endl;


		}
	}
}

