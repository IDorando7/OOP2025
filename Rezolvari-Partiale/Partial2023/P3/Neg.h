#pragma once
#include "Expression.h"

class Neg : public Expression
{
private:
	Expression* expression;

public:
	Neg(Expression* expression);
	~Neg();

	void print() override;
	int get_children_count() override;
	int compute() override;
	Expression* get_child(int i) override;
};

