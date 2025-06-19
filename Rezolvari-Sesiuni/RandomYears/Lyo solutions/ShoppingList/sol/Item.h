#pragma once
#include <bits/stdc++.h>
using namespace std;

class Item {
protected:
	string name;
public:
	virtual string getName() = 0;
	virtual string getInfo() = 0;
	virtual void setName(string name) = 0;
};
