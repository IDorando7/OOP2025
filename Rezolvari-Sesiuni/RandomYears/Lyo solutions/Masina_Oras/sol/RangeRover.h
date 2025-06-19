#pragma once
#include "SUV.h"

class RangeRover : public SUV {
private:
	int consum;
public:
	RangeRover() { name = "RangeRover"; }
	int getConsum();
	void setConsum(int a);
};

