#pragma once
#include "Cuvant.h"
#include "Text.h"

class Propozitie : public Text {
private:
	vector<Cuvant> cuvinte;
public:
	Propozitie(string prop);
	void AddCuvant(Cuvant cuv);
	void Afiseaza();
};

