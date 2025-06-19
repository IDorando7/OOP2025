#pragma once
#include "Feline.h"

class Tiger : public Feline {
public:
	string GetName();
	bool IsAFish();
	bool IsABird();
	bool IsAMammal();
	int GetSpeed();
};

