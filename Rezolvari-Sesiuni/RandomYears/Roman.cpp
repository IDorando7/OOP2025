#include "Roman.h"

Roman::Roman(string _name, string _autor)
{
	name = _name;
	autor = _autor;
}

string Roman::GetInfo()
{
	string s;
	s += "Roman " + name + " de " + autor;
	return s;
}
