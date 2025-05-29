#include "Apple.h"

Apple::Apple(int _price, int _quantity, string _Country)
{
	Country = _Country;
	price = _price;
	quantity = _quantity;
}

string Apple::GetType()
{
	return "Apple";
}

int Apple::GetQuantity()
{
	return quantity;
}

int Apple::GetPrice()
{
	return price;
}

void Apple::Print()
{
	printf("%s (from = %s) Price = %d Quantity = %d\n", GetType().c_str(), Country.c_str(), price, quantity);
}
