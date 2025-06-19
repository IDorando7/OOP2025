#pragma once
#include "Masina.h"

class Dacia : public Masina {
private:
	string color;
public:
	Dacia(string colo);
	string GetColor();
	string GetName();
};

