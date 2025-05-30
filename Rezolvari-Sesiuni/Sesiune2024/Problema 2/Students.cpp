#include "Students.h"

Students::Students(initializer_list<Student> l)
{
	for (auto w : l)
		a.push_back(w);
}

void Students::print_all()
{
	for (auto w : a)
		cout << w.name << " Math: " << w.mate << " Rom: " << w.romana << "\n";
}

void Students::analyze(string name)
{
	for (auto w : v)
		if (w->GetName() == name)
			w->Run(&a[0], a.size());
}

Students& Students::operator+=(Procesator* x)
{
	v.push_back(x);
	return (*this);
}
