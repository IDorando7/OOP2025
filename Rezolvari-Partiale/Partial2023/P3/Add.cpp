#include "Add.h"

void Add::print()
{
	// (expression1 + expression2)
	printf("(");
	this->expression1->print();
	printf(" + ");
	this->expression2->print();
	printf(")");
}

int Add::get_children_count()
{
	return 2;
}

int Add::compute()
{
	return this->expression1->compute() + this->expression2->compute();
}

Expression* Add::get_child(int i)
{
	if (i == 0)
	{
		return this->expression1;
	}
	else if (i == 1)
	{
		return this->expression2;
	}
	return nullptr;
}

Add::Add(Expression* expression1, Expression* expression2)
{
	this->expression1 = expression1;
	this->expression2 = expression2;
}

Add::~Add()
{
	delete expression1;
	delete expression2;
}