#pragma once
#include <bits/stdc++.h>
using namespace std;

class Entry {
protected:
	string name;
public:
	Entry(string _name);
	Entry();
	string GetName();

	virtual void Add(string add) = 0;
	virtual bool Substract(int sub) = 0;
	virtual void Print() = 0;
};