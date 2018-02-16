// Workshop 4 - Constructors - At home
// Passenger.h
// Hoh-il (Julian) Synn
// Feb 12, 2018


// TODO: add header file guard here
#ifndef SICT_PASSENGER_H
#define SICT_PASSENGER_H

// TODO: declare your namespace here
namespace sict {

	// TODO: define the Passenger class here
	class Passenger {
		char passengerName[32];
		char destination[32];
		int year;
		int month;
		int day;

	public:
		Passenger();

		Passenger(const char* passenger_char, const char* destination_char);
		Passenger(const char* passenger_char, const char* destination_char, int year_int, 
			int month_int, int day_int);


		bool isEmpty() const;
		void display() const;
		const char* name() const;
		bool canTravelWith(const Passenger&) const;

	};


}



#endif