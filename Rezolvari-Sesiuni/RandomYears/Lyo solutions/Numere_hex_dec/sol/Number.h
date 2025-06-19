#pragma once
#include "Printer.h"
#include "Decimal.h"
#include "Hexazecimal.h"

class Number {
private:
	int number;
	vector<Printer*> v;
	int count;
public:
	Number(int n);
	operator int();
	Number operator +(Number& s);
	Number operator -(Number& s);
	Number operator *(Number& s);
	Number operator /(Number& s);
	Number& operator +=(Printer* s);
	void Print();
};

