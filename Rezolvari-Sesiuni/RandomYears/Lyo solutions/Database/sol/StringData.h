#pragma once
#include "Entry.h"

class StringData : public Entry {
private:
	string value;
public:
	StringData(string _name, string _value);
	void Add(string add);
	bool Substract(int sub);
	void Print();
};

