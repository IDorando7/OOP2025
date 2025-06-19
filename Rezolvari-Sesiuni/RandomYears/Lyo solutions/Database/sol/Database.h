#pragma once
#include "Entry.h"
#include "IntegerData.h"
#include "StringData.h"

class Database {
private:
	vector<Entry*> entr;
public:
	Database& operator+=(Entry* s);
	Database& operator-=(string s);
	vector<Entry*>::iterator begin();
	vector<Entry*>::iterator end();
	void Print();
};

