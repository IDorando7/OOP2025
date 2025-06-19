#include "Pen.h"
#include "PriceVisitor.h"
#include "DetailsVisitor.h"

void Pen::Accept(Visitor* a) {
	if (auto it = dynamic_cast<PriceVisitor*>(a)) a->Visit(this);
	else {
		if (auto it = dynamic_cast<DetailsVisitor*>(a)) a->Visit(this);
	}
}

string Pen::GetColor() {
	return color;
}

int Pen::GetPrice() {
	return price;
}