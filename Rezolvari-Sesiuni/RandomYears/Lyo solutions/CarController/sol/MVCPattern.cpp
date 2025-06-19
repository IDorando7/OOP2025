#include "MVCPattern.h"

void MVCPattern::main() {
	Car model = this->getCar();
	CarView view = CarView();
	CarController controller = CarController(&model, &view);
	controller.updateCarView();
	controller.setCarModel("Jaguar");
	controller.updateCarView();
	controller.setCarType("XF");
	controller.updateCarView();
	controller.setCarYear(2015);
	controller.updateCarView();
	controller.setDoorsNumber(5);
	controller.updateCarView();
}

Car MVCPattern::getCar() {
	Car c;
	c.setCarModel("Dacia");
	c.setCarYear(2000);
	c.setCarModel("1310");
	c.setDoorsNumber(4);
	return c;
}

MVCPattern::MVCPattern() {}