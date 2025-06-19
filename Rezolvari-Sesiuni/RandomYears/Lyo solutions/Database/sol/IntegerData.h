#pragma once
#include "Entry.h"

class IntegerData : public Entry {
private:
	int value;
public:
	IntegerData(string _name, string _value);
	void Add(string add) override;
	bool Substract(int sub) override;
	void Print() override;
};

