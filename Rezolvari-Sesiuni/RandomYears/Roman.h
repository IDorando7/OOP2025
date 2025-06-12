#pragma once
#include "Carte.h"

class Roman : public Carte
{
	string name;
	string autor;
public:
	Roman(string _name, string _autor);
	string GetInfo();
};