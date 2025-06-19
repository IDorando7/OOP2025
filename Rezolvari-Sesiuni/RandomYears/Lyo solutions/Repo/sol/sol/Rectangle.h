#pragma once
#include "Shape.h"

class Rectangle : public Shape {
public:
	Rectangle(string c) : Shape("Rectangle", c) {}
	string GetName() override;
	string GetColor();
};


