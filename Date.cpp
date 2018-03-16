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

		if (day_1 >= 1 && day_1 <= numDays)
			day = day_1;

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
		//if (day == rhs.day && month == rhs.month && year == rhs.year && errorState == rhs.errorState) {
		if (dateComparator == rhs.dateComparator) {

			return true;
		}

		else {
			return false;
		}
	}

	//operator != function
	bool Date::operator!=(const Date& rhs) const {
		/*if (day != rhs.day && month != rhs.month && year != rhs.year 
			&& errorState != rhs.errorState) {*/
		if (dateComparator != rhs.dateComparator) {
			return true;
		}

		else {
			return false;
		}
	}

	//operator < function
	bool Date::operator<(const Date& rhs) const {
		//if (day < rhs.day || month < rhs.month || year < rhs.year) {
		if (dateComparator < rhs.dateComparator) {
			return true;
		}

		else {
			return false;
		}
	}

	//operator >
	bool Date::operator>(const Date& rhs) const {
		//if (day > rhs.day || month > rhs.month || year > rhs.year) {
		if (dateComparator > rhs.dateComparator) {
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
		//char checkYear;
		//char checkMonth;
		//istr >> year >> checkYear >> month >> checkMonth >> day;
		//cout << year << checkYear << month << checkMonth << day << endl;
		int year123;
		int month123;
		int day123;

		istr >> year123;
		if (istr.get() != '/') { // fix for later
			errorState = CIN_FAILED;
		}

		istr >> month123;
		if (istr.get() != '/') {
			errorState = CIN_FAILED;
		}

		istr >> day123;
		if (istr.fail()) {
			errorState = CIN_FAILED;
		}
		else if (year123 < min_year || year123 > max_year) {
			errorState = YEAR_ERROR;

		}

		else if (month123 < 1 || month123 > 12) {
			errorState = MON_ERROR;

		}

		else if (day123 < 1 || day123 > mdays(month123, year123)) {
			errorState = DAY_ERROR;

		}

		else {
			year = year123;
			month = month123;
			day = day123;
		}


		return istr;

		//else {
		//	errCode(CIN_FAILED);
		//	return istr;
		//}
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