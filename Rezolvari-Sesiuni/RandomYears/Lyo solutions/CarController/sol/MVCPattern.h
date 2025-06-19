#pragma once
#include "CarController.h"

class MVCPattern {
private:
	CarController controller;
public:
	MVCPattern();
	void main();

	Car getCar();
};

