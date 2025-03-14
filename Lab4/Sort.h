#pragma once
#include <iostream>  

class Sort
{
public:
	int n;
	int* a;
public :

	Sort(int _n, int minimum, int maximum);
	Sort(std::initializer_list<int> InitList);
	Sort(int count, int* vec);
	Sort(int count, ...);
	Sort(const char* s);
	void InsertSort(bool ascendent = false);
	void QuickSort(bool ascendent = false);
	void BubbleSort(bool ascendent = false);
	void Print();
	int GetElementsCount();
	int GetElementFromIndex(int index);
};

