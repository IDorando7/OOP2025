#include "Food.h"

string Food::getName() {
	return name;
}

string Food::getInfo() {
	return name + " : " + to_string(quantity) + " kg";
}

void Food::setName(string _name) {
	name = _name;
}
void Food::setQuantity(float _quan) {
	quantity = _quan;
}