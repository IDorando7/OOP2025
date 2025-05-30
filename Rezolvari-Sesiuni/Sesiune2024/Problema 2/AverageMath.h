#pragma once
#include "Procesator.h"

class AverageMath : public Procesator
{
public:
	void Run(Student* p, int count);
	string GetName();
};