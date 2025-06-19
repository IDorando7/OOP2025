#pragma once
#include "carte.h"

class revista : public carte {
private:
	string titlu;
	int nrArticole;
public:
	revista(string _titlu, int _nr);
	string GetInfo();
};

