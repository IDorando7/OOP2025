#pragma once
#include <iostream>
class PriorityQueue
{
public:
	int* pq;
	int count, currentSize;
public:

	PriorityQueue(int _count);
	PriorityQueue(PriorityQueue & other);
	~PriorityQueue();
	PriorityQueue& operator+= (int x);
	int operator-- (int);
	operator int();
	int operator()(const char* fun);
	int Top();
};

