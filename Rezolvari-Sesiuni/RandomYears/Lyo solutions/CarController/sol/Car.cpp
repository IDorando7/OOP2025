#include "Car.h"
#include "CarController.h"

string Car::getCarModel() {
	return model;
}

int Car::getCarYear() {
	return year;
}

string Car::getCarType() {
	return type;
}

int Car::getDoorsNumber() {
	return doors;
}

void Car::setCarModel(string mo) {
	model = mo;
}

void Car::setCarYear(int y) {
	year = y;
}

void Car::setCarType(string t) {
	type = t;
}

void Car::setDoorsNumber(int d) {
	doors = d;
}