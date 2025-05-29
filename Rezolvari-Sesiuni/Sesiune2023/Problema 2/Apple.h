	#pragma once
#include "Article.h"

class Apple : public Article
{
	string Country;
	int price, quantity;
public:
	Apple(int _price, int _quantity, string _Country);
	string GetType();
	int GetQuantity();
	int GetPrice();
	void Print();
};