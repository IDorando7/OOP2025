#pragma once
#include "Text.h"

class Cuvant : public Text {
private:
	string cuvant;
public:
	Cuvant(string cuv);
	void Afiseaza() override;
	void SetCuvant(string cuv);
};

