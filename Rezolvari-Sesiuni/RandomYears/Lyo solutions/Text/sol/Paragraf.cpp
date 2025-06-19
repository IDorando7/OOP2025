#include "Paragraf.h"

void Paragraf::Add(Text* txt) {
	text.push_back(txt);
}

void Paragraf::Afiseaza() {
	for (auto e : text) {
		e->Afiseaza();
	}
}