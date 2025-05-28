#pragma once
#include "Student.h"
#include <bits/stdc++.h>
class Catalog
{
	//vector <Student> v;
public:
	virtual void AddStudent(Student x) = 0;
	virtual void Sort() = 0;
	virtual double CalcMedie(Student x) = 0;
	virtual vector<int> GetNota(Student x, Materie* materie) = 0;
};