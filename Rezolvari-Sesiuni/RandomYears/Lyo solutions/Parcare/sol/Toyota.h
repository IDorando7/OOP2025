#pragma once
#include "Masina.h"

class Toyota : public Masina {
private:
	string color;
public:
	Toyota(string colo);
	string GetColor();
	string GetName();
};

