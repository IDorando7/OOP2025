#pragma once
#include "Procesor.h"

class LongestWord : public Procesor
{
	string name;
public:
	LongestWord(string _name);
	string GetName();
	int Compute(string s);
};