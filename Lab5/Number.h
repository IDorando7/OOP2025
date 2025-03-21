#pragma once
#include <iostream>

using namespace std;

class Number
{
	char* x;
	int baza;

public:
	Number(const char* value, int base);
	~Number();

	// add operators and copy/move constructor
	friend Number operator+ (Number A, Number B);

	void SwitchBase(int newBase);
	void Print();
	int GetDigitsCount();
	int GetBase();

};

