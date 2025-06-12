#pragma once
#include "entry.h"

class Database
{
private:
	vector <Entry*> v;

public:

	Database& operator += (Entry* t);
	Database& operator -= (string t);
	vector <Entry*> :: iterator begin();
	vector <Entry*> :: iterator end();
	void Print();
};