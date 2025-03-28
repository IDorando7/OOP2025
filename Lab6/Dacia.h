#pragma once
#include "Car.h"

class Dacia : public Car
{
public:
	Dacia();
	void SetSpeedBasedOnWeather(Weather vreme);
	void SetFuelCapacity(int x);
	void SetFuelConsumption(float x);
	int GetFuelCapacity();
	float GetFuelConsumption();
	float GetSpeed(Weather vreme);
};

