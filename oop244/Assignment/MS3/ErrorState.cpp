//ErrorState.cpp
//Julian (Hoh-il) Synn
//OOP244 - Milestone 2
//Date: Mar 17, 2018
#include <iostream>
#include <cstring>
#include "ErrorState.h"



using namespace std;

namespace AMA {

	ErrorState::ErrorState(const char* errorMessage)
	{
		if (errorMessage == nullptr) {
			errorText = nullptr;
			//cout << "default const ++++" << errorText;
		}
		else {
			errorText = new char[strlen(errorMessage) + 1]; //allocate mem
			strcpy(errorText, errorMessage);
		}


	}

	ErrorState::~ErrorState() {
		delete[] errorText; //data member, obj; dealloc
	}

	void ErrorState::clear() {
		delete[] errorText;
		errorText = nullptr;
	}

	bool ErrorState::isClear() const {
		return errorText == nullptr;
	}

	void ErrorState::message(const char* str) {
		delete[] errorText;
		errorText = new char[strlen(str)+1];
		strcpy(errorText, str); //errortext goes to; str comes from

	}

	const char* ErrorState::message()const {
		return errorText;
	}

	ostream& operator<<(ostream& os1, const ErrorState& Error1) {
		if (!Error1.isClear()) {
			cout << Error1.message();
		}
		return os1;


	}




}