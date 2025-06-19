#include "Cuvant.h"

Cuvant::Cuvant(string cuv) {
	cuvant = cuv;
}

void Cuvant::Afiseaza() {
	cout << cuvant;
}

void Cuvant::SetCuvant(string cuv) {
	cuvant = cuv;
}
