#include "canvas.h"

Canvas::Canvas(int linii, int coloane) : rows(linii), cols(coloane)
{
	clear();
}

void Canvas::set_pixel(int x, int y, char value)
{
	if (x >= 0 and x < rows and y >= 0 and y <= cols)
		A[x][y] = value;
}

void Canvas::set_pixels(int count, ...)
{
	va_list args;
	va_start(args, count);
	for (int i = 1; i <= count; i++)
	{
		int x = va_arg(args, int);
		int y = va_arg(args, int);
		char ch = va_arg(args, char);
		set_pixel(x, y, ch);
	}
}

void Canvas::clear()
{
	A.assign(rows, vector<char>(cols, ' '));
}

void Canvas::print() const
{
	for (vector<char> w : A)
	{
		for (char w2 : w)
			printf("%c", w2);
		printf("\n");
	}
}
