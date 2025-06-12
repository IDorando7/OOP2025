#pragma once
#include "Animal.h"

class Cow : public Animal
{
public:
	string GetName()
	{
		return "Cow";
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