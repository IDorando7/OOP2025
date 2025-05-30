#pragma once
#include "Coin.h"
#include "EUR.h"
#include "USD.h"
#include "RON.h"

class BANK_ACCOUNT
{
	vector<Coin*> v;
public:
	BANK_ACCOUNT();
	~BANK_ACCOUNT();
	BANK_ACCOUNT& operator += (string);
	BANK_ACCOUNT& operator += (double);
	BANK_ACCOUNT& operator += (int);
	void PrintCoinAmmount(function<bool(Coin*)>);
	vector<Coin*>::iterator begin();
	vector<Coin*>::iterator end();
};