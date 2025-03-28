#include "Ford.h"

Ford::Ford()
{
	fuelCapacity = 65;
	fuelConsumption = 14.0f;
}

void Ford::SetSpeedBasedOnWeather(Weather vreme)
{
	switch (vreme)
	{
	case Rain: { speed = 0.85f; break; }
	case Sunny: { speed = 0.95f; break; }
	case Snow: { speed = 0.6f; break; } 
	}
}

void Ford::SetFuelCapacity(int x)
{
	fuelCapacity = x;
}

void Ford::SetFuelConsumption(float x)
{
	fuelConsumption = x;
}

int Ford::GetFuelCapacity()
{
	return fuelCapacity;
}

float Ford::GetFuelConsumption()
{
	return fuelConsumption;
}

float Ford::GetSpeed(Weather vreme)
{
	switch (vreme)
	{
	case Rain: { return 0.85f; break; }
	case Sunny: { return 0.95f; break; }
	case Snow: { return 0.6f; break; }
	}
}
