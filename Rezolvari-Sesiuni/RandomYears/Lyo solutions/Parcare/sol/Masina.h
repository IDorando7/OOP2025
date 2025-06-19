#pragma once
#include <bits/stdc++.h>
using namespace std;

class Masina {
protected:
	string name;
public:
	Masina() = default;
	virtual string GetColor() = 0;
	virtual string GetName() = 0;
};
