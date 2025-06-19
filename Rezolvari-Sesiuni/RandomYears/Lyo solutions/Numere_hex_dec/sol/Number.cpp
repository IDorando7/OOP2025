#include "Number.h"

Number::Number(int n) {
	number = n;
	count = 0;
}

Number::operator int() {
	return number;
}

Number Number::operator +(Number& s) {
	return Number(number + s.number);
}

Number Number::operator -(Number& s) {
	return Number(number - s.number);
}

Number Number::operator *(Number& s) {
	return Number(number * s.number);
}

Number Number::operator /(Number& s) {
	return Number(number / s.number);
}

Number& Number::operator +=(Printer* s) {
	v.push_back(s);
	return (*this);
}

void Number::Print() {
	for (auto e : v) {
		cout << "Format: " << e->GetFormatName() << " Value: " << e->FormatNumber(number) << '\n';
	}
}