#include "CircularString.h"
#include "iostream"

CircularString::CircularString(char ch, int _count)
{
	s = new char[_count + 1];
	count = _count;
	for (int i = 0; i < count; i++)
		s[i] = ch;
	s[count] = '\0';
}

CircularString::~CircularString()
{
	count = 0;
	delete[] s;
}

CircularString& CircularString::operator--()
{
	char ch = s[0];
	for (int i = 0; i < count - 1; i++)
		s[i] = s[i + 1];
	s[count - 1] = ch;
	return (*this);
}

CircularString CircularString::operator++(int)
{
	CircularString temp('*', count);
	char ch = s[count - 1];
	for (int i = count - 1; i > 0; i--)
	{
		s[i] = s[i - 1];
		temp.s[i] = s[i];
	}
	temp.s[0] = s[0];
	s[0] = ch;
	return temp;
}

CircularString& CircularString::operator+=(char ch)
{
	for (int i = count - 1; i > 0; i--)
		s[i] = s[i - 1];
	s[0] = ch;
	return *this;
}

CircularString::operator const char* ()
{
	const char* s1 = s;
	return s1;
}

CircularString::operator int()
{
	return count;
}

int CircularString::operator()(int value)
{
	if (0 <= value and value < count)
		return static_cast<int>(s[value]);
	return 0;
}

char CircularString::operator[](int value)
{
	if (0 <= value and value < count)
		return s[value];
	return 0;
}