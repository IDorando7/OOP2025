#pragma once
#include "MasinaOras.h"

class Opel : public MasinaOras {
private:
	int capacitate;
	int anFabricatie;
	string culoare;
public:
	Opel() { name = "Opel"; }
	int getCapacitate();
	string getCuloare();
	void setCapacitate(int s);
	void setCuloare(string s);
	void setAnFabricatie(int a);
	int getAnFabricatie();
};

