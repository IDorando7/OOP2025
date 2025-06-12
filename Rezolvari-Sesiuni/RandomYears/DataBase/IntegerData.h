#pragma once
#include "entry.h"

class IntegerData : public Entry
{
private:
	int value;

public:
	IntegerData(string name, string _value) : Entry(name), value(stoi(_value)) {};
	void Add(string addTo);
	bool Substract(int val);
	void Print();
};