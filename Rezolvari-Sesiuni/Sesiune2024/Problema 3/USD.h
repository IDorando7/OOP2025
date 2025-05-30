#pragma once
#include "Coin.h"

class USD : public Coin
{
	int ammount;
public:
	USD(int);
	double GetValue();
};