#pragma once
#include "Revista.h"
#include "Roman.h"

class Biblioteca
{
	vector <Carte*> v;
	int count;
public:
	Biblioteca();
	~Biblioteca();
	Biblioteca& operator += (Carte* t);
	vector<Carte*> ::iterator begin();
	vector<Carte*> ::iterator end();
	operator int();
	void PrintFilter(function<bool(Carte* c)>);
};
