#include "Opel.h"

int Opel::getCapacitate() {
	return capacitate;
}

string Opel::getCuloare() {
	return culoare;
}

void Opel::setCapacitate(int s) {
	capacitate = s;
}

void Opel::setCuloare(string s) {
	culoare = s;
}

void Opel::setAnFabricatie(int a) {
	anFabricatie = a;
}

int Opel::getAnFabricatie() {
	return anFabricatie;
}
