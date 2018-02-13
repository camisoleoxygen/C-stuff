// TODO: add file header comments here
// Workshop 4 - Constructors - Test Main
// Passenger.h
// Hoh-il (Julian) Synn
// Feb 12, 2018


// TODO: add header file guard here
#ifndef SICT_PASSENGER_H
#define SICT_PASSENGER_H
//#define _CRT_SECURE_NO_WARNINGS
//#include <string.h>

// TODO: declare your namespace here
namespace sict {

// TODO: define the Passenger class here
	class Passenger {
		char passengerName[32];
		char destination[32];
		
	public:
		Passenger();

		Passenger(const char* passenger_char, const char* destination_char); 

		bool isEmpty() const;
		void display() const;

	};


}



#endif
