#include "Decimal.h"

string Decimal::GetFormatName() {
	return "Decimal";
}

string Decimal::FormatNumber(int num) {
	return to_string(num);
}