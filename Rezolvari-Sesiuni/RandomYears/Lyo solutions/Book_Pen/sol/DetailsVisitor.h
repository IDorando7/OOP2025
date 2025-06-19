#pragma once
#include "Visitor.h"

class DetailsVisitor : public Visitor {
public:
	void Visit(Book* b) override;
	void Visit(Pen* p) override;
};

