#include "Value.h"

void Value::print()
{
	printf("%d", this->value);
}

int Value::get_children_count()
{
	return 0;
}

int Value::compute()
{
	return this->value;
}

Expression* Value::get_child(int i)
{
	return nullptr;
}

Value::Value(int value)
{
	this->value = value;
}

Value::~Value()
{
	this->value = 0;
}