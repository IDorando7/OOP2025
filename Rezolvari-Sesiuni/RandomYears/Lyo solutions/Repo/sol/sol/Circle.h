#pragma once
#include "Shape.h"

class Circle : public Shape {
public:
	Circle(string c) : Shape("Circle", c) {}
	string GetName() override;
	string GetColor();
};



