#pragma once
#include "Car.h"

class Mazda : public Car
{
public:
	Mazda();
	void SetSpeedBasedOnWeather(Weather vreme);
	void SetFuelCapacity(int x);
	void SetFuelConsumption(float x);
	int GetFuelCapacity();
	float GetFuelConsumption();
	float GetSpeed(Weather vreme);
};

