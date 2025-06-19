#pragma once
#include "Text.h"
#include "Cuvant.h"
#include "Propozitie.h"

class Paragraf : public Text {
private:
	vector<Text*> text;
public:
	void Add(Text* txt);
	void Afiseaza();
};

