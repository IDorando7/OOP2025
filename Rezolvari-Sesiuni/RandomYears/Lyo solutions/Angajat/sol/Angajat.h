#pragma once
#include <bits/stdc++.h>
using namespace std;

class Angajat {
protected:
	int salariu;
	string nume;
	int id;
public:
	Angajat(string _nume, int _salariu, int _id) : nume(_nume), salariu(_salariu), id(_id) {}
	string GetNume();
	int GetSalariu();
	bool SetSalariu(int sal);
	int GetId();
	virtual void Lucreaza()  = 0;
};

