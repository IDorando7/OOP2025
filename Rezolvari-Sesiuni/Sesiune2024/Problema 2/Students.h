#pragma once
#include "Procesator.h"

class Students
{
	vector<Procesator*> v;
	vector<Student> a;
public:
	Students(initializer_list<Student>);
	void print_all();
	void analyze(string);
	Students& operator += (Procesator*);
};