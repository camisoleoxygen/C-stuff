// Workshop 4 - Constructors - At home
// Passenger.cpp
// Hoh-il (Julian) Synn
// Feb 12, 2018

// TODO: add your headers here
#include <cstring>
#include <iostream>
#include "Passenger.h"


// TODO: continue your namespace here
using namespace std;

namespace sict {

	// TODO: implement the default constructor here
	Passenger::Passenger() {

		passengerName[0] = '\0';
		destination[0] = '\0';
		year = 0;
		month = 0;
		day = 0;
	}

	Passenger::Passenger(const char* passenger_char, const char* destination_char) {
		if (passenger_char == nullptr || destination_char == nullptr || passenger_char[0] == '\0' &&
			destination_char[0] == '\0') {
			strcpy(passengerName, passenger_char);
			strcpy(destination, destination_char);
		}
		else {
			*this = Passenger();
		}
	}

	// TODO: implement the constructor with 2 parameters here
	Passenger::Passenger(const char* passenger_char, const char* destination_char, int year_int,
		int month_int, int day_int) {

		if (passenger_char == nullptr || destination_char == nullptr ||  passenger_char[0] == '\0' ||
			destination_char[0] == '\0' || year_int < 2017 || year_int > 2020 || month_int < 1
			|| month_int > 12 || day_int < 1 || day_int > 31) {
			*this = Passenger();

			}

			else {
				strcpy(passengerName, passenger_char);
				strcpy(destination, destination_char);
				year = year_int;
				month = month_int;
				day = day_int;

			}

		}



	// TODO: implement isEmpty query here
	bool Passenger::isEmpty() const {
		return passengerName[0] == '\0';

	}

	// TODO: implement display query here
	void Passenger::display() const {
		if (isEmpty()) {
			cout << "No passenger!" << endl;
		}

		else {
			cout << passengerName << " - " << destination << " on " << year << "/" << month <<
				"/" << day << endl;
		}
	}

	const char* Passenger::name() const {
		if (isEmpty() == false) {
			return passengerName;
		}
	}

	bool Passenger::canTravelWith(const Passenger& pass) const {
		// if statement
		if (strcmp(destination, pass.destination) == 0 && year == pass.year &&
			month == pass.month && day == pass.day) {
			return true;
		}
		else {
			return false;
		}
	}

}
