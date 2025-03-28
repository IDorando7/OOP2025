#include "Dacia.h"

Dacia::Dacia()
{
	fuelCapacity = 50;
	fuelConsumption = 9.1f;
}

void Dacia::SetSpeedBasedOnWeather(Weather vreme)
{
	switch (vreme)
	{
	case Rain: { speed = 0.7f; break; }
	case Sunny: { speed = 0.9f; break; }
	case Snow: { speed = 0.5f; break; }
	}
}

void Dacia::SetFuelCapacity(int x)
{
	fuelCapacity = x;
}

void Dacia::SetFuelConsumption(float x)
{
	fuelConsumption = x;
}

int Dacia::GetFuelCapacity()
{
	return fuelCapacity;
}

float Dacia::GetFuelConsumption()
{
	return fuelConsumption;
}

float Dacia::GetSpeed(Weather vreme)
{
	switch (vreme)
	{
	case Rain: { return 0.7f; break; }
	case Sunny: { return 0.9f; break; }
	case Snow: { return 0.5f; break; }
	}
}