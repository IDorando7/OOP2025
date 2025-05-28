#pragma once
#include <iostream>
#include <algorithm>
class fractie
{
	int x, y;
public:
	fractie();
	fractie(int x, int y);
	fractie(const char* s);
	friend fractie operator - (fractie A, fractie B);
	friend fractie operator + (fractie A, fractie B);
	friend fractie operator * (fractie A, fractie B);
	friend bool operator == (fractie A, fractie B);
	void print();
	fractie simplify();
	int operator [] (const char * s);

};

