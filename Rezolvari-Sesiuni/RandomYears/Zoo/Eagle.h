#pragma once
#include "Animal.h"

class Eagle : public Animal
{
public:
	string GetName()
	{
		return "Eagle";
	}

	bool IsAFish()
	{
		return 0;
	}

	bool IsABird()
	{
		return 1;
	}

	bool IsAMammal()
	{
		return 0;
	}
};