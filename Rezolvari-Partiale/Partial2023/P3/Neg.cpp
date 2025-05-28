#include "Neg.h"

void Neg::print()
{
	printf("( - ");
	this->expression->print();
	printf(")");
}

int Neg::get_children_count()
{
	return 1;
}

int Neg::compute()
{
	return 0 - this->expression->compute();
}

Expression* Neg::get_child(int i)
{
	if (i == 0)
	{
		return this->expression;
	}
	return nullptr;
}

Neg::Neg(Expression* expression)
{
	this->expression = expression;
}

Neg::~Neg()
{
	delete expression;
}