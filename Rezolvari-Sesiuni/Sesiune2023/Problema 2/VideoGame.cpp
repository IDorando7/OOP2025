#include "VideoGame.h"

VideoGame::VideoGame(int _price, int _quantity, string _platform, string _name)
{
	platform = _platform;
	name = _name;
	price = _price;
	quantity = _quantity;
}

string VideoGame::GetType()
{
	return "VideoGame";
}

int VideoGame::GetQuantity()
{
	return quantity;
}

int VideoGame::GetPrice()
{
	return price;
}

void VideoGame::Print()
{
	printf("%s (Platform=%s, Name=%s) Price=%d Quantity=%d\n", GetType().c_str(), platform.c_str(), name.c_str(), price, quantity);
}
