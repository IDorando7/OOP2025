#include "Programator.h"

void Programator::Add(string _cod) {
	cod += _cod;
}

string Programator::GetCode() {
	return cod;
}

void Programator::Lucreaza() {
	cout << "[" << this->GetNume() << "]:" << '\n';
	cout << this->GetCode();
}