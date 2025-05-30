#include "EUR.h"

EUR::EUR(string _ammount)
{
	ammount = _ammount;;
}

double EUR::GetValue()
{
	return stod(ammount);
}
