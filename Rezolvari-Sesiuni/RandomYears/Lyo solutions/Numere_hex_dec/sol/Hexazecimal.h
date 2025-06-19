#pragma once
#include "Printer.h"

class Hexazecimal : public Printer {
	string GetFormatName();
	string FormatNumber(int num);
};

