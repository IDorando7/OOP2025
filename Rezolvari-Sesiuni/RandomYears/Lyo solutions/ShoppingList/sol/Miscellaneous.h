#pragma once
#include "Item.h"

class Miscellaneous : public Item {
private:
	string name;
	int count;
public:
	string getName();
	string getInfo();
	void setName(string _name);
	void setCount(int _c);
};

