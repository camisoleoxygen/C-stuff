//Workshop in_lab_6
//Contact.h
//By: Julian (Hoh-il) Synn
//Date: Mar 12, 2018

#ifndef SICT_CONTACT_H
#define SICT_CONTACT_H

namespace sict {

	class Contact{
		char contactName[20];

		double* phoneNumber;

	public:
		Contact(); //default constructor
		Contact(const char*nameContact, const double&pNumber, int storeNum); //3 parameter constructor

		bool isEmpty() const;
		void display() const;

	};


}



#endif



