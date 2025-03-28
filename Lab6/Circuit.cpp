#include "Circuit.h"
#include <iostream>

Circuit::Circuit()
{
	nrCars = 0;
	length = 100;
	vreme = Sunny;
	nrNot = nr = 0;
	for (int i = 0; i < 20; i++)
	{
		cars[i] = nullptr;
		NotFinish[i] = 0;
		clasament[i] = { 0, i };
	}

}

void Circuit::SetLength(int lungime)
{
	length = lungime;
}

void Circuit::SetWeather(Weather _vreme)
{
	vreme = _vreme;
	for (int i = 0; i < nrCars; i++)
		cars[i]->SetSpeedBasedOnWeather(vreme);
}

void Circuit::AddCar(Car* car)
{
	cars[nrCars] = car;
	nrCars++;
}

void Circuit::Race()
{
	float maxLength;
	for (int i = 0; i < nrCars; i++)
	{
		maxLength = cars[i]->GetFuelCapacity() / cars[i]->GetFuelConsumption() * cars[i]->GetSpeed(vreme) * 100; 
		if (maxLength < length)
		{
			NotFinish[nrNot] = i;
			nrNot++;
		}
		else
		{
			clasament[nr] = { cars[i]->GetSpeed(vreme), i};
			nr++;
		}
	}

	for (int i = 0; i < nr - 1; i++)
		for (int j = i + 1; j < nr; j++)
			if (clasament[i].speed < clasament[j].speed)
				swap(clasament[i], clasament[j]);
			
}

void Circuit::ShowFinalRanks()
{
	cout << "The Final Ranks for the cars who finished the race\n";
	for (int i = 0; i < nr; i++)
		cout << clasament[i].index << " " << length / clasament[i].speed << "\n";
}

void Circuit::ShowWhoDidNotFinish()
{
	std::cout << nrNot << " cars didnt finish this race :\n";
	for (int i = 0; i < nrNot; i++)
		std::cout << NotFinish[i] << " ";

}
