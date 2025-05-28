#pragma once
#include "Catalog.h"

class CatalogRO : public Catalog
{
public:
	vector <Student> v;
	void AddStudent(Student x);
	void Sort();
	double CalcMedie(Student x);
	vector<int> GetNota(Student x, Materie* materie);
};