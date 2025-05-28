#pragma once
#include "Expression.h"

class Value: public Expression
{
private:
	int value;
public:
	Value(int value);
	~Value();

	void print() override;
	int get_children_count() override;
	int compute() override;
	Expression* get_child(int i) override;
};

