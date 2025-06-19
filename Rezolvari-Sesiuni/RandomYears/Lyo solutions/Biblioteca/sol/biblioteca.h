#pragma once
#include "carte.h"
#include "revista.h"
#include "roman.h"

class biblioteca {
private:
	int count;
	vector<carte*> carti;
public:
	biblioteca();
	~biblioteca();
	biblioteca& operator+=(carte* s);
	vector<carte*>::iterator begin();
	vector<carte*>::iterator end();
	operator int();
	void PrintFilter(std::function<bool(carte*)> filter);
};

