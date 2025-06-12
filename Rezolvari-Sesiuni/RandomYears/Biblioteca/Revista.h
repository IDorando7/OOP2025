#pragma once
#include "Carte.h"

class Revista : public Carte
{
	string titlu;
	int nrArticole;
public:
	Revista(string _titlu, int _nrArticole);
	string GetInfo();
};