#pragma once
#include "Angajat.h"

class Programator : public Angajat {
private:
	string cod;
public:
	Programator(string _nume, int _salariu, int _id) : Angajat(_nume, _salariu, _id) {}
	void Add(string _cod);
	string GetCode();
	void Lucreaza();
};

