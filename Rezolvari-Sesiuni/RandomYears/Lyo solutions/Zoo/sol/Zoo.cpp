#include "Zoo.h"

vector<Animal*> Zoo::GetFishes() {
	vector<Animal*> l;
	for (auto e : animals) {
		if (e->IsAFish() == true) l.push_back(e);
	}
	return l;
}

vector<Animal*> Zoo::GetBirds() {
	vector<Animal*> l;
	for (auto e : animals) {
		if (e->IsABird() == true) l.push_back(e);
	}
	return l;
}

vector<Animal*> Zoo::GetMammals() {
	vector<Animal*> l;
	for (auto e : animals) {
		if (e->IsAMammal() == true) l.push_back(e);
	}
	return l;
}

vector<Feline*> Zoo::GetFelines() {
	vector<Feline*> l;
	for (auto e : animals) {
		if (auto fel = dynamic_cast<Feline*>(e)) l.push_back(fel);
	}
	return l;
}

int Zoo::GetTotalAnimals() {
	return animals.size();
}

void Zoo::operator+=(Animal* s) {
	animals.push_back(s);
}

bool Zoo::operator() (string name) {
	for (auto e : animals) {
		if (e->GetName() == name) return true;
	}
	return false;
}