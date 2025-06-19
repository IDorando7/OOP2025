#include "ShoppingList.h"

void ShoppingList::addItem(Item* s) {
	v.push_back(s);
}

void ShoppingList::printList() {
	for (auto e : v) {
		cout << e->getInfo() << '\n';
	}
}
