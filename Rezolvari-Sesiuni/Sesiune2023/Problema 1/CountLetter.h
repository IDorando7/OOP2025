#pragma once
#include "Procesor.h"

class CountLetter : public Procesor
{
	string name;
	function<bool(char)> pred;
public:
	CountLetter(string _name, function<bool(char)> p);
	string GetName();
	int Compute(string s);
};