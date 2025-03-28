#include "Mazda.h"

Mazda::Mazda()
{
	fuelCapacity = 51;
	fuelConsumption = 8.4f;
}

void Mazda::SetSpeedBasedOnWeather(Weather vreme)
{
	switch (vreme)
	{
	case Rain: { speed = 0.83; break; }
	case Sunny: { speed = 0.92f; break; }
	case Snow: { speed = 0.8f; break; }
	}
}

void Mazda::SetFuelCapacity(int x)
{
	fuelCapacity = x;
}

void Mazda::SetFuelConsumption(float x)
{
	fuelConsumption = x;
}

int Mazda::GetFuelCapacity()
{
	return fuelCapacity;
}

float Mazda::GetFuelConsumption()
{
	return fuelConsumption;
}

float Mazda::GetSpeed(Weather vreme)
{
	switch (vreme)
	{
	case Rain: { return 0.83; break; }
	case Sunny: { return 0.92f; break; }
	case Snow: { return 0.8f; break; }
	}
}