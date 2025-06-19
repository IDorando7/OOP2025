#pragma once
#include "MasinaOras.h"

class Dacia : public MasinaOras {
private:
	int capacitate;
	string culoare;
public:
	Dacia() { name = "Dacia"; }
	void setCapacitate(int s);
	void setCuloare(string s);
	int getCapacitate();
	string getCuloare();
};

