#pragma once
#include "Printer.h"

class Decimal : public Printer {
public:
	string GetFormatName();
	string FormatNumber(int num);
};

