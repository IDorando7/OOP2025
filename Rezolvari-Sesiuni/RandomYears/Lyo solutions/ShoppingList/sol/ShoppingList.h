#pragma once
#include "Item.h"
#include "Food.h"
#include "Miscellaneous.h"

class ShoppingList {
private:
	vector<Item*> v;
public:
	void addItem(Item* s);
	void printList();
};

