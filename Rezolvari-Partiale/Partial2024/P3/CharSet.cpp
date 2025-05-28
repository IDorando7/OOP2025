#include "CharSet.h"
#include <iostream>

CharSet::CharSet()
{
	count = 0;
	for (int i = 0; i <= 255; i++)
		s[i] = 0;
}

CharSet::CharSet(const char* sir)
{
	count = 0;
	for (int i = 0; i <= 255; i++)
		s[i] = 0;
	for (int i = 0; sir[i]; i++)
		if (s[sir[i]] == 0)
		{
			s[sir[i]] = 1;
			count++;
		}
}

CharSet& CharSet::operator+=(char ch)
{
	if (s[ch] == 0)
	{
		s[ch] = 1;
		count++;
	}
	return (*this);
}

CharSet::operator int()
{
	return count;
}

int CharSet::operator()(const char* sir)
{
	int v = 0;
	for (int i = 0; sir[i]; i++)
		v += (s[sir[i]] == 1);
	return v;
}

bool CharSet::operator[](int index)
{
	return s[index] == 1;
}

void CharSet::print()
{
	for (int i = 0; i < 256; i++)
		if (s[i] == 1)
			std::cout << static_cast<char>(i) << ",";
	std::cout << "\n";
}

CharSet operator&(CharSet A, CharSet B)
{
	CharSet C;
	for (int i = 0; i < 256; i++)
		if (A.s[i] == 1 and B.s[i] == 1)
		{
			C.s[i] = 1;
			C.count++;
		}
	return C;
}

CharSet operator|(CharSet A, CharSet B)
{
	CharSet C;
	for (int i = 0; i < 256; i++)
		if (A.s[i] == 1 or B.s[i] == 1)
		{
			C.s[i] = 1;
			C.count++;
		}
	return C;
}
