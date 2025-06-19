#pragma once
#include <bits/stdc++.h>
using namespace std;

class Printer {
public:
	virtual string GetFormatName() = 0;
	virtual string FormatNumber(int num) = 0;
};