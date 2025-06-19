#include "revista.h"

revista::revista(string _titlu, int _nr) {
	titlu = _titlu;
	nrArticole = _nr;
}

string revista::GetInfo() {
	string s("Revista " + titlu + " cu " + to_string(nrArticole) + " articole.");
	return s;
}
