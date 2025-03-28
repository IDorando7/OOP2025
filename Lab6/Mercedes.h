#pragma once
#include "Car.h"

class Mercedes : public Car
{
public:
	Mercedes();
	void SetSpeedBasedOnWeather(Weather vreme);
	void SetFuelCapacity(int x);
	void SetFuelConsumption(float x);
	int GetFuelCapacity();
	float GetFuelConsumption();
	float GetSpeed(Weather vreme);
};