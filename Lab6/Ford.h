#pragma once
#include "Car.h"

class Ford : public Car
{
public:
	Ford();
	void SetSpeedBasedOnWeather(Weather vreme);
	void SetFuelCapacity(int x);
	void SetFuelConsumption(float x);
	int GetFuelCapacity();
	float GetFuelConsumption();
	float GetSpeed(Weather vreme);
};
