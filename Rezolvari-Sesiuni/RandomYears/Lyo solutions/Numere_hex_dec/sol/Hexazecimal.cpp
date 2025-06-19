#include "Hexazecimal.h"

string Hexazecimal::GetFormatName() {
	return "Hexazecimal";
}

string Hexazecimal::FormatNumber(int num) {
	string hexc;
	/*ostringstream os;
	os << hex << showbase << num;
	hexc = os.str();*/
	char buff[25];
	sprintf_s(buff, "0x%08X", num);
	return buff;
}