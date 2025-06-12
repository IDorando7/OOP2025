#pragma once
#include "entry.h"

class StringData : public Entry
{
private:
	string value;

public:
	StringData(string name, string value) : Entry(name), value(value) {};
	void Add(string toAdd);
	bool Substract(int val);
	void Print();
};