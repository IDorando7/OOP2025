#include "StringData.h"

StringData::StringData(string _name, string _value) {
	name = _name;
	value = _value;
}

void StringData::Add(string add) {
	value += add;
}

bool StringData::Substract(int sub) {
	if (value.size() > sub) {
		value.resize(value.size() - sub);
		return true;
	}
	return false;
}

void StringData::Print() {
	cout << name << " = " << value << ";";
}