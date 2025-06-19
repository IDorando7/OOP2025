#pragma once
#include "Dacia.h"
#include "FerrariRosu.h"
#include "Masina.h"
#include "Parcare.h"
#include "Toyota.h"

class Parcare {
private:
	vector<Masina*> v;
	int max_cap;
public:
	void Create(int _max);
	bool Add(Masina* s);
	Parcare& RemoveByName(string _name);
	int GetCount();
	bool IsFull();
	void ShowAll();
	void ShowByColor(string _color);
};

