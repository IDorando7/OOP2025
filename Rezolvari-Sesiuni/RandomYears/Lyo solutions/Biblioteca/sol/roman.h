#pragma once
#include "carte.h"

class roman : public carte {
private:
	string nume;
	string autor;
public:
	roman(string _nume, string _autor);
	string GetInfo();
};

