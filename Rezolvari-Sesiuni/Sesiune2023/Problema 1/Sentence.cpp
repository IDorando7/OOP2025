#include "Sentence.h"

Sentence::Sentence(string _name)
{
	name = _name;
}

void Sentence::RunAll()
{
	for (auto w : v)
		cout << "Name:" << w->GetName() << " => " << w->Compute(name) << "\n";
}

void Sentence::ListAll()
{
	for (auto w : v)
		cout << "Name:" << w->GetName() << "\n";
}

void Sentence::Run(string s)
{
	for (auto w : v)
		if (w->GetName() == s)
			cout << w->Compute(name) << "\n";
}

Sentence& Sentence::operator+=(Procesor* s)
{
	v.push_back(s);
	return *this;
}

Sentence& Sentence::operator+(Procesor* s)
{
	return (*this += s);
}
