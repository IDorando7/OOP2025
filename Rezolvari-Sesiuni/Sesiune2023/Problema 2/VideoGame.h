#pragma once
#include "Article.h"

class VideoGame : public Article
{
	string platform, name;
	int price, quantity;
public:
	VideoGame(int _price, int _quantity, string _platform, string _name);
	string GetType();
	int GetQuantity();
	int GetPrice();
	void Print();
};