#pragma once
class CharSet
{
	bool s[256];
	int count;
public:

	CharSet();
	CharSet(const char* sir);
	CharSet& operator += (char ch);
	friend CharSet operator &(CharSet A, CharSet B);
	friend CharSet operator |(CharSet A, CharSet B);
	operator int();
	int operator()(const char* sir);
	bool operator[](int index);
	void print();

};

