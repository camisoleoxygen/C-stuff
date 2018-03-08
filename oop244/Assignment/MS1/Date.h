// Final Project Milestone 1 - Date.h
//
// Date: Mar 5, 2018
// Author: Julian (Hoh-il) Synn
/////////////////////////////////////////////////////////////////

//macros
#ifndef AMA_DATE_H
#define AMA_DATE_H
#define NO_ERROR 0
#define CIN_FAILED 1 
#define YEAR_ERROR 2  
#define MON_ERROR 3 
#define DAY_ERROR 4 


namespace AMA {

	const int min_year = 2000;
	const int max_year = 2030;

	class Date {

		int year;
		int month;
		int day;
		int dateComparator;
		int errorState;


		int mdays(int, int)const;

		void errCode(int errorCode);

	public:
		Date();
		Date(int year_1, int month_1, int day_1);

	};





}
#endif