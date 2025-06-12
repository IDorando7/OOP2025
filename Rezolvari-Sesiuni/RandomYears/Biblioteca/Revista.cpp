#include "Revista.h"

Revista::Revista(string _titlu, int _nrArticole)
{
	titlu = _titlu;
	nrArticole = _nrArticole;
}

string Revista::GetInfo()
{
	string s;
	s += "Revista " + titlu + " cu " + to_string(nrArticole) + " articole";
	return s;
}
