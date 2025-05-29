#pragma once
#include "Article.h"

class Shop
{
	vector <Article*> v;
public:
	Shop& Add(Article* articol);
	int GetTotalPrice();
	int GetQuantity(string s);
	void List();
};