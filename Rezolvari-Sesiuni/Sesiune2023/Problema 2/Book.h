#pragma once
#include "Article.h"

class Book : public Article
{
	string title, author;
	int price, quantity;
public:
	Book(int _price, int _quantity, string _title, string _author);
	string GetType();
	int GetQuantity();
	int GetPrice();
	void Print();
};