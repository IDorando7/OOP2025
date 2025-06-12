#pragma once
#include <bits/stdc++.h>

using namespace std;

class Entry
{
protected:
	string name;

public:
	Entry(string _name);
	string GetName();
	virtual void Add(string) = 0;
	virtual bool Substract(int) = 0;
	virtual void Print() = 0;
};