// Workshop 5: operator overloading
// File: Fraction.h
// Name: Julian (Hoh-il) Synn
// Date: Feb 17, 2018
/////////////////////////////////////////////


// TODO: header file guard
#ifndef SICT_FRACTION_H
#define SICT_FRACTION_H

// TODO: create namespace
namespace sict {

	// TODO: define the Fraction class
	class Fraction {


		// TODO: declare instance variables 
		int numerator;
		int denominator;

		// TODO: declare private member functions
		int max() const;
		int min() const;
		void reduce();
		int gcd() const;

	public:
		// TODO: declare public member functions
		bool isEmpty() const;
		void display() const;
		Fraction(); //default constructor
		Fraction(int, int); //constructor with 2 parameters

		// TODO: declare the + operator overload
		Fraction operator+(const Fraction& rhs) const;

		//TODO: declare additional operator overloads
		Fraction operator*(const Fraction&) const;
		bool operator==(const Fraction&) const;
		bool operator!=(const Fraction&) const;
		Fraction& operator+=(const Fraction&);
	};

}
#endif
