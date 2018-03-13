// Final Project Milestone 1 - Date.cpp
//
// Date: Mar 5, 2018
// Author: Julian (Hoh-il) Synn
/////////////////////////////////////////////////////////////////
#include "Date.h"
#include <iostream>
using namespace std;


namespace AMA {

	// number of days in month mon_ and year year_
	//
	int Date::mdays(int mon, int year)const {
		int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, -1 };
		int month = mon >= 1 && mon <= 12 ? mon : 13;
		month--;
		return days[month] + int((month == 1)*((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
	}

	//Date class
	void Date::errCode(int errorCode) {
		errorState = errorCode;
	}

	Date::Date() { //this constructor (the brackets) belongs to this class

		year = 0;
		month = 0;
		day = 0;
		dateComparator = 0;
		errorState = NO_ERROR;

	}


	Date::Date(int year_1, int month_1, int day_1) { //constructor, same name, no return type
		//dateComparator = year * 372 + month * 13 + day;
		//year = year_1;
		//month = month_1;
		//day = day_1;
		//errorState = NO_ERROR;
		if (min_year < year_1 && year_1 < max_year)
			year = year_1;
		else {
			errorState = YEAR_ERROR;
		}

		//if statements for month
		if (month_1 >= 1 && month_1 <= 12)
			month = month_1;
		else {
			errorState = MON_ERROR;
		}

		//if statement for day
		int numDays = mdays(month_1, year_1);

		if (numDays >= 1 && numDays <= 31)
			day = numDays;

		else {
			errorState = DAY_ERROR;
		}

		dateComparator = year * 372 + month * 13 + day;

		if (errorState == YEAR_ERROR || errorState == MON_ERROR || errorState == DAY_ERROR) {
			day = 0;
			year = 0;
			month = 0;
			dateComparator = 0;
			errorState = NO_ERROR;
		}
		//cout << "Constructor" << year << month << day << endl;
	}

	//operator == function
	bool Date::operator==(const Date& rhs) const {
		if (day == rhs.day && month == rhs.month && year == rhs.year && errorState == rhs.errorState) {
			return true;
		}

		else {
			return false;
		}
	}

	//operator != function
	bool Date::operator!=(const Date& rhs) const {
		if (day != rhs.day && month != rhs.month && year != rhs.year 
			&& errorState != rhs.errorState) {
			return true;
		}

		else {
			return false;
		}
	}

	//operator < function
	bool Date::operator<(const Date& rhs) const {
		if (day < rhs.day && month < rhs.month && year < rhs.year) {
			return true;
		}

		else {
			return false;
		}
	}

	//operator >
	bool Date::operator>(const Date& rhs) const {
		if (day > rhs.day && month > rhs.month && year > rhs.year) {
			return true;
		}

		else {
			return false;
		}
	}



	//operator <=
	bool Date::operator<=(const Date& rhs) const {
		if (day <= rhs.day && month <= rhs.month && year <= rhs.year) {
			return true;
		}

		else {
			return false;
		}
	}


	//operator >=
	bool Date::operator>=(const Date& rhs) const {
		if (day >= rhs.day && month >= rhs.month && year >= rhs.year) {
			return true;
		}

		else {
			return false;
		}
	}

	//returns errorstate as an error code value
	int Date::errCode() const {
		return errorState;
	}

	//returns true if not "NO ERROR"
	bool Date::bad() const {
		if (errorState != NO_ERROR)
			return true;

		else {
			return false;
		}
	}

	//read and fail
	std::istream& Date::read(std::istream& istr) {
		char checkYear;
		char checkMonth;
		cin >> year >> checkYear >> month >> checkMonth >> day;
		cout << year << checkYear << month << checkMonth << day << endl;
		if (cin.fail()) {
			errCode(CIN_FAILED);
			return istr;
		}

		if (year < min_year || year > max_year) {
			errCode(YEAR_ERROR);
			return istr;
		}

		if (month < 1 || month > 12) {
			errCode(MON_ERROR);
			return istr;
		}

		if (day < 1 || day > mdays(month, year)) {
			errCode(DAY_ERROR);
			return istr;
		}

		else {
			errCode(NO_ERROR);
			return istr;
		}
	}

	
	std::ostream& Date::write(std::ostream& ostr) const {
		ostr << year << "/";
		if (month < 10) {
			ostr << "0";
		}
		ostr << month << "/";
		if (day < 10) {
			ostr << "0";
		}
		ostr << day;
		return ostr;
	}

	//helper functions <<
	std::ostream& operator<<(std::ostream& os, const Date& d) {
		return d.write(os);
	}


	//helper functions >>
	std::istream& operator>>(std::istream& is, Date& d) {
		return d.read(is);
	}




}