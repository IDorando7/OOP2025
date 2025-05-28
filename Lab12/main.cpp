#include <bits/stdc++.h>
#include "Catalog.h"
#include "CatalogRO.h"
#include "CatalogEN.h"
using namespace std;

int main()
{
	CatalogRO catalog;
	Materie romana;
	Materie engleza;
	Materie informatica;

	Student x("Marcel", 'R');
	x.AddNota(&romana, 10);
	x.AddNota(&romana, 8);
	x.AddNota(&romana, 9);
	x.AddNota(&engleza, 8);
	x.AddNota(&engleza, 4);

	Student y("Ion", 'R');
	y.AddNota(&informatica, 4);
	y.AddNota(&informatica, 6);

	catalog.AddStudent(x);
	catalog.AddStudent(y);
	vector <int> sol = catalog.GetNota(x, &romana);
	for (auto w : sol)
		cout << w << " ";

	return 0;
}