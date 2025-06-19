#pragma once
#include "Feline.h"

class Lion : public Feline {
public:
	string GetName();
	bool IsAFish();
	bool IsABird();
	bool IsAMammal();
	int GetSpeed();
};

