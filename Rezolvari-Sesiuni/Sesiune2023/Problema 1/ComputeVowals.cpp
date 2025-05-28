#include "ComputeVowals.h"

ComputeVowals::ComputeVowals(string _name)
{
	name = _name;
}

string ComputeVowals::GetName()
{
	return name;
}

bool isVowel(char ch)
{
	if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or
		ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U')
		return 1;
	return 0;
}

int ComputeVowals::Compute(string s)
{
	int sol = 0;
	for (int i = 0; i < s.size(); i++)
		sol += isVowel(s[i]);
	return sol;
}
