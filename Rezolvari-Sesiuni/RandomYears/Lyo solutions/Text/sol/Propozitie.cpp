#include "Propozitie.h"

Propozitie::Propozitie(string prop) {
	int i = 0, c = 0;
	string word;

	while (i != prop.size()) {
		if (prop[i] == ' ') {
			if (word.size() > 0) {
				AddCuvant(Cuvant(word));
				word.clear();
			}
		}
		else {
			word.push_back(prop[i]);
		}
		i++;
	}

	if (word.size() > 0) {
		AddCuvant(Cuvant(word));
		word.clear();
	}
}

void Propozitie::AddCuvant(Cuvant cuv) {
	cuvinte.push_back(cuv);
}

void Propozitie::Afiseaza() {
	for (auto e : cuvinte) {
		e.Afiseaza(); cout << " ";
	}

	cout << ".";
}