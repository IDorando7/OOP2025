#pragma once
#include "Masina.h"

class FerrariRosu : public Masina {
private:
	string color;
public:
	FerrariRosu();
	string GetColor();
	string GetName();
};
