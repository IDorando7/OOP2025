#pragma once
#include <bits/stdc++.h>
using namespace std;

class Animal {
public:
	virtual string GetName() = 0;
	virtual bool IsAFish() = 0;
	virtual bool IsABird() = 0;
	virtual bool IsAMammal() = 0;
};
