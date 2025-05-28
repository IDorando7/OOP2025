#include "CatalogEN.h"

void CatalogEN::AddStudent(Student x)
{
	v.push_back(x);
}

void CatalogEN::Sort()
{
	sort(v.begin(), v.end(), [](Student a, Student b)
		{
			double medie = 0, medie2 = 0;
			for (auto w2 : a.Note)
				for (auto w3 : w2.second)
					medie += w3;
			medie = medie * 1.0 / a.Note.size();

			for (auto w2 : a.Note)
				for (auto w3 : w2.second)
					medie += w3;
			medie2 = medie2 * 1.0 / b.Note.size();

			return medie > medie2;
		});
}

double CatalogEN::CalcMedie(Student x)
{
	double medie = 0;
	for (auto w2 : x.Note)
		for (auto w3 : w2.second)
			medie += w3;
	medie = medie * 1.0 / x.Note.size();
	return medie;
}

vector<int> CatalogEN::GetNota(Student x, Materie* materie)
{
	return x.Note[materie];
}
