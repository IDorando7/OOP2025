#pragma once
#include "Animal.h"

class Eagle : public Animal {
public:
	string GetName();
	bool IsAFish();
	bool IsABird();
	bool IsAMammal();
};

