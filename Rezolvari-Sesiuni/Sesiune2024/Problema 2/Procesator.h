#pragma once

#include "Student.h"

class Procesator
{
public:
	virtual void Run(Student*, int count) = 0;
	virtual string GetName() = 0;
};