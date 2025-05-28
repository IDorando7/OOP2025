#include "CountLetter.h"

CountLetter::CountLetter(string _name, function<bool(char)> p)
{
	name = _name;
	pred = p;
}

string CountLetter::GetName()
{
	return name;
}

int CountLetter::Compute(string s)
{
	int sol = 0;
	for (int i = 0; i < s.size(); i++)
		sol += pred(s[i]);
	return sol;
}
