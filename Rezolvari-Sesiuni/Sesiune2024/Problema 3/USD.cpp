#include "USD.h"

USD::USD(int _ammount)
{
	ammount = _ammount;
}

double USD::GetValue()
{
	return ammount;
}
