#pragma once
#include "Expression.h"

class Add : public Expression
{
private:
	Expression* expression1, * expression2;
public:
	Add(Expression* expression1, Expression* expression2);
	~Add();

	void print() override;
	int get_children_count() override;
	int compute() override;
	Expression* get_child(int i) override;
};

