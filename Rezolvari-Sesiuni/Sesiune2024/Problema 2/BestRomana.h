#pragma once
#include "Procesator.h"

class BestRomana : public Procesator
{
public:
	void Run(Student* p, int count);
	string GetName();
};