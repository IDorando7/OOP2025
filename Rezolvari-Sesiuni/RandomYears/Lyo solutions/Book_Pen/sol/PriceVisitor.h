#pragma once
#include "Visitor.h"

class PriceVisitor : public Visitor {
public:
	void Visit(Book* b);
	void Visit(Pen* p);
};

