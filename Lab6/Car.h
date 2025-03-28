#pragma once
#include "Weather.h"

class Car
{
protected:
	int fuelCapacity;
	float speed, fuelConsumption;
public :
	virtual void SetSpeedBasedOnWeather(enum Weather) = 0;
	virtual void SetFuelCapacity(int x) = 0;
	virtual void SetFuelConsumption(float x) = 0; 
	virtual int GetFuelCapacity() = 0;
	virtual float GetFuelConsumption() = 0;
	virtual float GetSpeed(Weather vreme) = 0;
};