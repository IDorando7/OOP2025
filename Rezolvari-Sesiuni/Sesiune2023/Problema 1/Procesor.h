#pragma once
#include <bits/stdc++.h>

using namespace std;

class Procesor
{
public:
	virtual string GetName() = 0;
	virtual int Compute(string s) = 0;
};