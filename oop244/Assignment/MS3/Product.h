#ifndef secureFile
#define secureFile

#include "ErrorState.h"
#include <iostream>


namespace AMA {

	//pre-defined consts
	const int maxSku = 7;
	const int unitDescriptor = 10;
	const int nameDescriptor = 75;
	const float taxRate = 0.13;

	class Product {
		char type;
		char sku[maxSku + 1]; //null byte, terminator for + 1
		char unit[unitDescriptor + 1];
		char* name;
		int quantityOnHand;
		int quantityNeeded;
		double price;
		bool taxable;
		ErrorState holdError;

	protected:
		void name(const char*);
		const char* name() const;
		double cost() const;
		void message(const char*);
		bool isClear() const;


	public:
		Product();

		//seven arg construct
		Product(const char* holdSku, const char* nameProduct, const char* holdUnit, int holdQuantity,
		bool taxStatus, double priceBefore, int quantityNeed);

		//copy constructor
		Product(const Product& copyProduct);
		Product& operator=(const Product& opProduct);
		~Product(); //destructor in a header file

		std::fstream& store(std::fstream& file, bool newLine = true) const;
		std::fstream& load(std::fstream& file);
		std::ostream& write(std::ostream& os, bool linear) const;
		std::istream& read(std::istream& is);
		bool operator==(const char*) const;
		double total_cost() const;
		void quantity(int);
		bool isEmpty() const;
		int qtyNeeded() const;
		int quantity() const;
		bool operator>(const char*) const;
		bool operator>(const Product&) const;
		int operator+=(int);
	}

	//helper functions
	std::ostream& operator<<(std::ostream&, const Product&);
	std::istream& operator>>(std::istream&, Product&);
	double operator+=(double&, const Product&);

}

#endif 
