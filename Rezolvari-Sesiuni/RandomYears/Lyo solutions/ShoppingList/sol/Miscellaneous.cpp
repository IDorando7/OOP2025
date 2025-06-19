#include "Miscellaneous.h"

string Miscellaneous::getName() {
	return name;
}

string Miscellaneous::getInfo() {
	return name + " : " + to_string(count) + " items";
}

void Miscellaneous::setName(string _name) {
	name = _name;
}

void Miscellaneous::setCount(int _c) {
	count = _c;
}