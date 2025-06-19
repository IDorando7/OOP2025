#include "IntegerData.h"

IntegerData::IntegerData(string _name, string _value) {
	name = _name;
	value = stod(_value);
}

void IntegerData::Add(string add) {
	value += stod(add);
}

bool IntegerData::Substract(int sub) {
	if (value > sub) {
		value -= sub;
		return true;
	}
	return false;
}

void IntegerData::Print() {
	cout << name << " = " << value << ";";
}