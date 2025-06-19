#pragma once
#include "Shape.h"

class Square : public Shape {
public:
	Square(string c) : Shape("Square", c) {}
	string GetName() override;
	string GetColor();
};

