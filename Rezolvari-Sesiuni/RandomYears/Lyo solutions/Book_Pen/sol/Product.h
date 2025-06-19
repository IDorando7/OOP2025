#pragma once
//#include "Visitor.h"
#include <bits/stdc++.h>
using namespace std;

class Visitor;

class Product{
public:
	virtual void Accept(Visitor* a) = 0;
};

