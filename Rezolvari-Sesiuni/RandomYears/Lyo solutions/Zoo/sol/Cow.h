#pragma once
#include "Animal.h"

class Cow : public Animal {
public:
	string GetName();
	bool IsAFish();
	bool IsABird();
	bool IsAMammal();
};

