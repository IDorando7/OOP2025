#pragma once
#include "Animal.h"

class Feline : public Animal
{
	int speed;
public:
	virtual int GetSpeed() = 0;
};