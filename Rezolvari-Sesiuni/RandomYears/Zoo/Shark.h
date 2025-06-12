#pragma once
#include "Animal.h"

class Shark : public Animal
{
public:
	string GetName()
	{
		return "Shark";
	}

	bool IsAFish()
	{
		return 1;
	}

	bool IsABird()
	{
		return 0;
	}

	bool IsAMammal()
	{
		return 0;
	}
};