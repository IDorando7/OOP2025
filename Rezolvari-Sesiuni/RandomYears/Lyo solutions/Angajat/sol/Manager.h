#pragma once
#include "Angajat.h"
#include "Programator.h"

class Manager : public Angajat {
private:
	string echip_name;
	vector<Angajat*> angaj;
public:
	Manager(string echipa, string _nume, int _salariu, int _id) : Angajat(_nume, _salariu, _id), echip_name(echipa) {}
	void Lucreaza();
	bool Angajeaza(Angajat* x);
	bool Concediaza(Angajat* x);
	Angajat* GetAngajat(int _id);
};

