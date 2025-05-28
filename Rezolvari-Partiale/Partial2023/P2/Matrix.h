#pragma once
#include <iostream>
class Matrix
{
	int n, m;
	int** mat;
public:
	Matrix(int _n, int _m);
	Matrix(Matrix &A);
	~Matrix();
	int& operator ()(int _n, int _m);
	int operator[] (const char* s);
	friend bool operator == (Matrix A, Matrix B);
	void print();
	bool is_identity_matrix();
	bool is_square_matrix();
	void fill(int val);

};

