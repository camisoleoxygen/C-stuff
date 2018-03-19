//ErrorState.cpp
//Julian (Hoh-il) Synn
//OOP244 - Milestone 2
//Date: Mar 17, 2018

#include "ErrorState.h"
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

namespace AMA {

/*	ErrorState::ErrorState(const char* errorMessage = nullptr) {
		if (errorMessage == nullptr) {
			errorText[0] = '\0';
			cout << "default const ++++" << errorText;
		}
		else {
			errorText = new char[strlen(errorMessage)+1]; //allocate mem
		}

	}
	*/
	ErrorState::ErrorState(const char* errorMessage)
	{
		if (errorMessage == nullptr) {
			errorText[0] = '\0';
			cout << "default const ++++" << errorText;
		}
		else {
			errorText = new char[strlen(errorMessage) + 1]; //allocate mem
		}
	}

	ErrorState::~ErrorState() {
		delete[] errorText; //data member, obj; dealloc
	}

	void ErrorState::clear() {
		delete[] errorText;
		errorText[0] = '\0';
	}

	bool ErrorState::isClear() const {
		if (errorText[0] == '\0') {
			return true;
		}

		else {
			return false;
		}

	}

	void ErrorState::message(const char* str) {
		delete[] errorText;
		errorText = new char[strlen(str)+1];
		strcpy(errorText, str); //errortext goes to; str comes from

	}

	const char* ErrorState::message()const {
		return errorText;
	}

	std::ostream& operator<<(std::ostream& os1, const ErrorState& Error1) {
		if (!Error1.isClear()) {
			std::cout << Error1.message() << endl;
		}
		return os1;


	}




}