#pragma once
#include "Car.h"

class Toyota : public Car
{
public:
	Toyota();
	void SetSpeedBasedOnWeather(Weather vreme);
	void SetFuelCapacity(int x);
	void SetFuelConsumption(float x);
	int GetFuelCapacity();
	float GetFuelConsumption();
	float GetSpeed(Weather vreme);
};

