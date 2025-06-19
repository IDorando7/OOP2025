#pragma once
#include "Animal.h"

class Shark : public Animal {
public:
	string GetName();
	bool IsAFish();
	bool IsABird();
	bool IsAMammal();
};

