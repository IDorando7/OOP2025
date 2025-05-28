#pragma once
class CircularString
{
public:
	char* s;
	int count;
public:

	CircularString(char ch, int _count);
	~CircularString();
	CircularString& operator--();
	CircularString operator++(int);
	CircularString& operator+= (char ch);
	operator const char* ();
	operator int();
	int operator ()(int value);
	char operator [](int value);

};

