#pragma once
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

class Repo {
private:
	vector<Shape*> sha;
public:
	Shape* GetShape(string shape, string col);
	void Add(Shape* s);
	void Remove(string info);
	void PrintAll();
};

