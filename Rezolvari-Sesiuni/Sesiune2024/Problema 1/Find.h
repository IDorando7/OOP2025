#pragma once
#include "procesator.h"

class Find : public Procesator
{
	function<bool(int)> pred;
public:
	Find(function<bool(int)>p);
	void Run(int* a, int count);
};