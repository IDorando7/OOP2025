#include "Mercedes.h"

Mercedes::Mercedes()
{
	fuelCapacity = 100;
	fuelConsumption = 17.7f;
}

void Mercedes::SetSpeedBasedOnWeather(Weather vreme)
{
	switch (vreme)
	{
	case Rain: { speed = 1.00f; break; }
	case Sunny: { speed = 1.00f; break; }
	case Snow: { speed = 1.00f; break; } // My G Class is not nerfed by weather 
	}
}

void Mercedes::SetFuelCapacity(int x)
{
	fuelCapacity = x;
}

void Mercedes::SetFuelConsumption(float x)
{
	fuelConsumption = x;
}

int Mercedes::GetFuelCapacity()
{
	return fuelCapacity;
}

float Mercedes::GetFuelConsumption()
{
	return fuelConsumption;
}

float Mercedes::GetSpeed(Weather vreme)
{
	switch (vreme)
	{
	case Rain: { return 1.00f; break; }
	case Sunny: { return 1.00f; break; }
	case Snow: { return 1.00f; break; } 
	}
}
