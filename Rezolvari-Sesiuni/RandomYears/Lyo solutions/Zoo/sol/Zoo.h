#pragma once
#include "Animal.h"
#include "Cow.h"
#include "Eagle.h"
#include "Feline.h"
#include "Lion.h"
#include "Shark.h"
#include "Tiger.h"

class Zoo {
	vector<Animal*> animals;
public:
	vector<Animal*> GetFishes();
	vector<Animal*> GetBirds();
	vector<Animal*> GetMammals();
	vector<Feline*> GetFelines();
	int GetTotalAnimals();
	void operator+=(Animal* s);
	bool operator() (string name);
};

