#pragma once
#include "Feline.h"

class Zoo
{
	vector <Animal*> v;
public:
	vector<Animal*> GetFishes();
	vector<Animal*> GetBirds();
	vector<Animal*> GetMammals();
	vector<Feline*> GetFelines();
	int GetTotalAnimals();
	Zoo& operator += (Animal*);
	bool operator()(string name);
};