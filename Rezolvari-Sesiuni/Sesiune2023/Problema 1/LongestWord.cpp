#include "LongestWord.h"

LongestWord::LongestWord(string _name)
{
	name = _name;
}

string LongestWord::GetName()
{
	return name;
}

int LongestWord::Compute(string s)
{
	int sol = 0, cnt = 0;
	for (int i = 0; i < s.size(); i++)
		if (isalpha(s[i]))
			cnt++;
		else
		{
			sol = max(sol, cnt);
			cnt = 0;
		}
	sol = max(sol, cnt);
	return sol;
}
