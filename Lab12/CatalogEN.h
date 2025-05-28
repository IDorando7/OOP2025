#pragma once
#include "Catalog.h"

class CatalogEN : public Catalog
{
	vector <Student> v;
	void AddStudent(Student x);
	void Sort();
	double CalcMedie(Student x);
	vector<int> GetNota(Student x, Materie* materie);
};