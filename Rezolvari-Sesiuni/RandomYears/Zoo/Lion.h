#pragma once
#include "Feline.h"

class Lion : public Feline
{
	int GetSpeed()
	{
		return 80;
	}

	string GetName()
	{
		return "Lion";
	}

	bool IsAFish()
	{
		return 0;
	}

	bool IsABird()
	{
		return 0;
	}

	bool IsAMammal()
	{
		return 1;
	}
};