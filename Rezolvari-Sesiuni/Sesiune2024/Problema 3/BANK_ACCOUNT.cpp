#include "BANK_ACCOUNT.h"

BANK_ACCOUNT::BANK_ACCOUNT()
{
	/// Nothing to see here
}

BANK_ACCOUNT::~BANK_ACCOUNT()
{
	for (auto w : v)
		delete w;
}

BANK_ACCOUNT& BANK_ACCOUNT::operator+=(string x)
{
	v.push_back(new EUR(x));
	return (*this);
}

BANK_ACCOUNT& BANK_ACCOUNT::operator+=(double x)
{
	v.push_back(new RON(x));
	return (*this);
}

BANK_ACCOUNT& BANK_ACCOUNT::operator+=(int x)
{
	v.push_back(new USD(x));
	return (*this);
}

void BANK_ACCOUNT::PrintCoinAmmount(function<bool(Coin*)> func)
{
	double sol = 0;
	for (auto w : v)
		if (func(w))
			sol += w->GetValue();
	cout << sol;
}

vector<Coin*>::iterator BANK_ACCOUNT::begin()
{
	return v.begin();
}

vector<Coin*>::iterator BANK_ACCOUNT::end()
{
	return v.end();
}
