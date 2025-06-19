#pragma once
#include <bits/stdc++.h>
using namespace std;

class Car {
private:
	string model;
	int year;
	string type;
	int doors;
public:
	string getCarModel();
	int getCarYear();
	string getCarType();
	int getDoorsNumber();
	void setCarModel(string mo);
	void setCarYear(int y);
	void setCarType(string t);
	void setDoorsNumber(int d);
};

