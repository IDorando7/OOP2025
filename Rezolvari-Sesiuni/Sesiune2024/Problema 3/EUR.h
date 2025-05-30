#pragma once
#include "Coin.h"

class EUR : public Coin
{
	string ammount;
public:
	EUR(string);
	double GetValue();
};