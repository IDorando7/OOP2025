#include "Lion.h"

string Lion::GetName() {
	return "Lion";
}

bool Lion::IsAFish() {
	return false;
}

bool Lion::IsABird() {
	return false;
}

bool Lion::IsAMammal() {
	return true;
}

int Lion::GetSpeed() {
	return 80;
}