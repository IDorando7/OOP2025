#pragma once
#include "CarView.h"
#include "Car.h"

class CarController{
private:
	Car* _model;
	CarView* car;
public:
	CarController();
	CarController(Car* m, CarView* c);
	void setCarModel(string);
	string getCarModel();
	void setCarYear(int);
	int getCarYear();
	void setCarType(string);
	string getCarType();
	void setDoorsNumber(int);
	int getDoorsNumber();
	void updateCarView();
};

