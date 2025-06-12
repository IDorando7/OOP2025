#include "IntegerData.h"

void IntegerData::Add(string addTo)
{
	value += stoi(addTo);
}

bool IntegerData::Substract(int val)
{
	value -= val;
	return 1;
}

void IntegerData::Print()
{
	cout << name << " = " << value << ";";
}
