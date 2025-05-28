#pragma once
#include "Materie.h"
#include <vector>
#include <string>
#include <map>

class Student
{
public:
	static int MatricolCount;
	int matricol;
	string nume;
	char limba;
	map <Materie*, vector<int> > Note;
	Student(string _nume, char _limba)
	{
		Student::MatricolCount++;
		matricol = MatricolCount;
		nume = _nume;
		limba = _limba;
	}

	void AddNota(Materie* materie, int nota)
	{
		Note[materie].push_back(nota);
	}
};