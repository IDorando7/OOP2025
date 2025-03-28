#include "Toyota.h"

Toyota::Toyota()
{
	fuelCapacity = 36;
	fuelConsumption = 7.4f;
}

void Toyota::SetSpeedBasedOnWeather(Weather vreme)
{
	switch (vreme)
	{
	case Rain: { speed = 0.75f; break; }
	case Sunny: { speed = 0.93f; break; }
	case Snow: { speed = 0.55f; break; }
	}
}

void Toyota::SetFuelCapacity(int x)
{
	fuelCapacity = x;
}

void Toyota::SetFuelConsumption(float x)
{
	fuelConsumption = x;
}

int Toyota::GetFuelCapacity()
{
	return fuelCapacity;
}

float Toyota::GetFuelConsumption()
{
	return fuelConsumption;
}

float Toyota::GetSpeed(Weather vreme)
{
	switch (vreme)
	{
	case Rain: { return 0.75f; break; }
	case Sunny: { return 0.93f; break; }
	case Snow: { return 0.55f; break; }
	}
}