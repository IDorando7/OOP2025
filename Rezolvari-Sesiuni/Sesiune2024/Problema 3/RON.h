#pragma once
#include "Coin.h"

class RON : public Coin
{
	double ammount;
public:
	RON(double);
	double GetValue();
};