#pragma once
#include "Procesor.h"

class Sentence
{
	vector <Procesor*> v;
	string name;
public:
	Sentence(string _name);
	void RunAll();
	void ListAll();
	void Run(string s);
	Sentence& operator += (Procesor* s);
	Sentence& operator + (Procesor* s);
};