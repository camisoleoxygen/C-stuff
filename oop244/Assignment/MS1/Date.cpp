// Final Project Milestone 1 - Date.cpp
//
// Date: Mar 5, 2018
// Author: Julian (Hoh-il) Synn
/////////////////////////////////////////////////////////////////
#include "Date.h"

namespace AMA {

	// number of days in month mon_ and year year_
	//
	int Date::mdays(int mon, int year)const {
		int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, -1 };
		int month = mon >= 1 && mon <= 12 ? mon : 13;
		month--;
		return days[month] + int((month == 1)*((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
	}

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

	Date::Date(int year_1, int month_1, int day_1) {
		if (min_year < year_1 && year_1 < max_year)
			year = year_1;

		else {
			errorState = YEAR_ERROR;
		}

		//if statements for month, day
	}








}