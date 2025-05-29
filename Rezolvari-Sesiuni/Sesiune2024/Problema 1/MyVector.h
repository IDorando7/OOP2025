#pragma once
#include "procesator.h"

class MyVector
{
	vector<int> d;
	vector<Procesator*> v;
public:
	MyVector& operator += (int x);
	MyVector& operator += (Procesator *s);
	MyVector& operator += (initializer_list<int> l);
	operator int();
	operator unsigned int();
	void process();
	void clear();
};