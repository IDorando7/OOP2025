#pragma once
#include "Procesor.h"

class ComputeVowals : public Procesor
{
	string name;
public:
	ComputeVowals(string _name);
	string GetName();
	int Compute(string s);
};