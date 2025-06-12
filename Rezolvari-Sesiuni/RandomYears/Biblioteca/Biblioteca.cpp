#include "Biblioteca.h"

Biblioteca::Biblioteca()
{
	count = 0;
}

Biblioteca::~Biblioteca()
{
	count = 0;
	v.clear();
}

Biblioteca& Biblioteca::operator+=(Carte* t)
{
	v.push_back(t);
	count++;
	return *this;
}

vector<Carte*>::iterator Biblioteca::begin()
{
	return v.begin();
}

vector<Carte*>::iterator Biblioteca::end()
{
	return v.end();
}

Biblioteca::operator int()
{
	return count;
}

void Biblioteca::PrintFilter(function<bool(Carte* c)> fn)
{
	for (auto w : v)
		if (fn(w))
			cout << w->GetInfo() << "\n";
}
