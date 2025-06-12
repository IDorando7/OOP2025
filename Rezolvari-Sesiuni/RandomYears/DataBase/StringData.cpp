#include "StringData.h"

void StringData::Add(string toAdd)
{
	value += toAdd;
}

bool StringData::Substract(int val)
{
	if (value.size() < val)
	{
		cout << "StringData: len(" << value << ") < " << val << "\n";
	}
	else while (val--)
		value.pop_back();
	return 1;
}

void StringData::Print()
{
	cout << name << " = " << value << ";";
}
