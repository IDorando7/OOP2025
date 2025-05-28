#include "Painter.h"



Painter::Painter(int _m, int _n)
{
	x = y = 0;
	mat = new char* [_n];
	for (int i = 0; i < _n; i++)
		mat[i] = new char[_m];
	for (int i = 0; i < _n; i++)
		for (int j = 0; j < _m; j++)
			mat[i][j] = '.';
	m = _m;
	n = _n;
}

Painter::~Painter()
{
	for (int i = 0; i < n; i++)
		delete[] mat[i];
	delete[] mat;
}

Painter& Painter::operator+=(Directie dir)
{
	if (dir.dir == 'R')
		for (int j = 0; j < dir.val; j++)
			mat[x][y++] = 'x';

	if (dir.dir == 'L')
		for (int j = 0; j < dir.val; j++)
			mat[x][y--] = 'x';

	if (dir.dir == 'U')
		for (int j = 0; j < dir.val; j++)
			mat[x--][y] = 'x';

	if (dir.dir == 'D')
		for (int j = 0; j < dir.val; j++)
			mat[x++][y] = 'x';

	return *this;
}

char& Painter::operator()(int _n, int _m)
{
	return mat[_m][_n];
}

Painter::operator int()
{
	return m * n;
}

void Painter::print()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			std::cout << mat[i][j];
		std::cout << "\n";
	}
	std::cout << "\n";
}
