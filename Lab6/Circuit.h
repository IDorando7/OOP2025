#pragma once
#include "Weather.h"
#include "Car.h"
using namespace std;

struct Pereche
{
	float speed;
	int index;
};

class Circuit
{
	int length, nrCars;
	int NotFinish[20], nrNot;
	Weather vreme;
	Car* cars[20]; // You are not allowed more than 20 cars in this illegal race 
	Pereche clasament[20];
	int nr;

public:
	Circuit();
	void SetLength(int x);
	void SetWeather(Weather _vreme);
	void AddCar(Car* car);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};

