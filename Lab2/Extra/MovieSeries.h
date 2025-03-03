#pragma once
#include "MovieClass.h"
#include <bits/stdc++.h>

class MovieSeries
{
	int count = 0;
	Movie* series[16];

public:
	void init();
	void add(Movie*);
	void print();
	void sort();
};