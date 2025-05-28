#include "Matrix.h"

Matrix::Matrix(int _m, int _n)
{
	mat = new int * [_n];
	for (int i = 0; i < _n; i++)
		mat[i] = new int [_m];
	n = _n;
	m = _m;
}

Matrix::Matrix(Matrix& A)
{
	mat = new int* [A.n];
	for (int i = 0; i < A.n; i++)
		mat[i] = new int[A.m];
	n = A.n;
	m = A.m;
}

Matrix::~Matrix()
{
	for (int i = 0; i < n; i++)
		delete[] mat[i];
	delete[] mat;
}

int& Matrix::operator()(int _m, int _n)
{
	return mat[_n][_m];
}

int Matrix::operator[](const char* s)
{
	if (s == "width")
		return m;
	if (s == "height")
		return n;
	if (s == "size");
	return 4 * n * m;
}

void Matrix::print()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			std::cout << mat[i][j] << " ";
		std::cout << "\n";
	}
}

bool Matrix::is_identity_matrix()
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (i == j and mat[i][j] != 1)
				return 0;
			else if (i != j and mat[i][j] != 0)
				return 0;
	return 1;
}

bool Matrix::is_square_matrix()
{
	return (n == m);
}

void Matrix::fill(int val)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			mat[i][j] = val;
}

bool operator==(Matrix A, Matrix B)
{
	if (A.n != B.n or A.m != B.m)
		return 0;
	for (int i = 0; i < A.n; i++)
		for (int j = 0; j < A.m; j++)
			if (A.mat[i][j] != B.mat[i][j])
				return 0;
	return 1;
}
