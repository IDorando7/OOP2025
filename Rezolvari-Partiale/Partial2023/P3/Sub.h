#pragma once
#include "Expression.h"

class Sub : public Expression
{
private:
	Expression* expression1, * expression2;
public:
	Sub(Expression* expression1, Expression* expression2);
	~Sub();

	void print() override;
	int get_children_count() override;
	int compute() override;
	Expression* get_child(int i) override;
};

