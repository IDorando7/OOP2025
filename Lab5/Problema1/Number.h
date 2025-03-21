#pragma once
#include <iostream>

using namespace std;

class Number
{
	char* x;
	int baza;

public:
	Number();
	Number(int value, int base = 10);
	Number(const char* value, int base);
	Number(const Number& other);
	Number(Number&& other);
	~Number();

	// add operators and copy/move constructor
	friend Number operator+ (Number A, Number B);
	friend Number operator- (Number A, Number B);
	char operator[] (int index);
	friend bool operator== (Number A, Number B);
	friend bool operator>= (Number A, Number B);
	friend bool operator<= (Number A, Number B);
	friend bool operator> (Number A, Number B);
	friend bool operator< (Number A, Number B);
	Number& operator-- ();
	Number  operator-- (int);
	bool operator= (int val);
	bool operator= (const char * sir);
	bool operator= (Number A);
	friend bool operator+= (Number& A, Number B);

	void SwitchBase(int newBase);
	void Print();
	int GetDigitsCount();
	int GetBase();

};

