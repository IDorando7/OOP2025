#pragma once
#include "Item.h"

class Food : public Item {
private:
	string name;
	float quantity;
public:
	string getName();
	string getInfo();
	void setName(string _name);
	void setQuantity(float _quan);
};

