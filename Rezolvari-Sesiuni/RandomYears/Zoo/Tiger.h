#pragma once
#include "Feline.h"

class Tiger : public Feline
{
	int GetSpeed()
	{
		return 100;
	}

	string GetName()
	{
		return "Tiger";
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