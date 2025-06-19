#pragma once
#include <bits/stdc++.h>
using namespace std;

class Shape {
protected:
	string name;
	string color;
public:
	Shape(string s, string c) : name(s), color(c) {}
	virtual string GetName() = 0;
	virtual string GetColor() = 0;
};