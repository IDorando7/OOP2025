#include "Angajat.h"

string Angajat::GetNume() {
	return nume;
}

int Angajat::GetSalariu() {
	return salariu;
}

bool Angajat::SetSalariu(int sal) {
	if (sal <= 0) return false;
	salariu = sal;
	return true;
}

int Angajat::GetId() {
	return id;
}