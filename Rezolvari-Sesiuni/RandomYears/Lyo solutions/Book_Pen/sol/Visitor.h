#pragma once
#include "Book.h"
#include "Pen.h";

class Visitor {
public:
	virtual void Visit(Book* b) = 0;
	virtual void Visit(Pen* p) = 0;
};
