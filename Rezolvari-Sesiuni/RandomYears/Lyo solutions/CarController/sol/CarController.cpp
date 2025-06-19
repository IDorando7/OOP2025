#include "CarController.h"

CarController::CarController() {}

CarController::CarController(Car* m, CarView* c) {
	_model = m;
	car = c;
}

void CarController::setCarModel(string s) {
	_model->setCarModel(s);
}

string CarController::getCarModel() {
	return _model->getCarModel();
}

void CarController::setCarYear(int y) {
	_model->setCarYear(y);
}

int CarController::getCarYear() {
	return _model->getCarYear();
}

void CarController::setCarType(string t) {
	_model->setCarType(t);
}

string CarController::getCarType() {
	return _model->getCarType();
}

void CarController::setDoorsNumber(int d) {
	_model->setDoorsNumber(d);
}

int CarController::getDoorsNumber() {
	return _model->getDoorsNumber();
}

void CarController::updateCarView() {
	car->printCarDetails(_model->getCarModel(), _model->getCarYear(), _model->getCarType(), _model->getDoorsNumber());
}