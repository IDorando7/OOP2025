#pragma once
#include "Product.h"

class Pen : public Product {
private:
	string color;
	int price;
public:
	Pen() : color("neagra"), price(5) {}
	Pen(int _price, string _color) : color(_color), price(_price) {}
	void Accept(Visitor* a);
	string GetColor();
	int GetPrice();
};

