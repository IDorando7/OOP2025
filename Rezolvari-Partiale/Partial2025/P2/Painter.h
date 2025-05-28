#ifndef __DIRECTIE__
#define __DIRECTIE__
#include <iostream>

struct Directie
{
	char dir;
	unsigned long long int val;
};

class Painter
{
private:
	char** mat;
	int m, n;
	int x, y;
public:
	Painter(int _m, int _n);
	~Painter();
	Painter& operator += (Directie dir);
	char& operator()(int _m, int _n);
	operator int();
	void print();
};

#endif
