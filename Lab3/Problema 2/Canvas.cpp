#include "Canvas.h"
#include <iostream>

using namespace std;

Canvas ::Canvas(int width, int height)
{
	rows = height;
	cols = width;
	A = new char* [rows];
	for (int i = 0; i < rows; i++)
		A[i] = new char[cols];

	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			A[i][j] = ' ';
}

void plotCirclePoints(int xc, int yc, int x, int y, int n, int m, Canvas *obj, char ch) 
{
	if (xc + x < n && yc + y < m && xc + x >= 0 && yc + y >= 0) obj->SetPoint(yc + y, xc + x, ch);
	if (xc - x < n && yc + y < m && xc - x >= 0 && yc + y >= 0) obj->SetPoint(yc + y, xc - x, ch);
	if (xc + x < n && yc - y < m && xc + x >= 0 && yc - y >= 0) obj->SetPoint(yc - y, xc + x, ch);
	if (xc - x < n && yc - y < m && xc - x >= 0 && yc - y >= 0) obj->SetPoint(yc - y, xc - x, ch);
	if (xc + y < n && yc + x < m && xc + y >= 0 && yc + x >= 0) obj->SetPoint(yc + x, xc + y, ch);
	if (xc - y < n && yc + x < m && xc - y >= 0 && yc + x >= 0) obj->SetPoint(yc + x, xc - y, ch);
	if (xc + y < n && yc - x < m && xc + y >= 0 && yc - x >= 0) obj->SetPoint(yc - x, xc + y, ch);
	if (xc - y < n && yc - x < m && xc - y >= 0 && yc - x >= 0) obj->SetPoint(yc - x, xc - y, ch);
}

// Bresenham circle drawing algorithm
void Canvas::DrawCircle(int xc, int yc, int r, char ch)
{
	int x = 0, y = r;
	int d = 3 - 2 * r;

	while (x <= y) 
	{
		plotCirclePoints(xc, yc, x, y, GetRows(), GetCols(), this, ch);
		x++;
		if (d > 0) 
		{
			y--;
			d += 4 * (x - y) + 10;
		}
		else 
			d += 4 * x + 6;
		
	}
}

void CompleteCircle(int xc, int yc, int x, int y, int n, int m, Canvas *obj, char ch) 
{

	for (int i = xc - x; i <= xc + x; i++) 
	{
		if (i >= 0 && i < n) 
		{
			if (yc + y >= 0 && yc + y < n) obj->SetPoint(yc + y, i, ch);
			if (yc - y >= 0 && yc - y < n) obj->SetPoint(yc - y, i, ch);
		}
	}

	for (int i = xc - y; i <= xc + y; i++) 
	{
		if (i >= 0 && i < n) 
		{
			if (yc + x >= 0 && yc + x < n) obj->SetPoint(yc + x, i, ch);
			if (yc - x >= 0 && yc - x < n) obj->SetPoint(yc - x, i, ch);
		}
	}
}

// Bresenham circle drawing algorithm
void Canvas::FillCircle(int xc, int yc, int r, char ch)
{
	int x = 0, y = r;
	int d = 3 - 2 * r;

	while (x <= y)
	{
		CompleteCircle(xc, yc, x, y, GetRows(), GetCols(), this, ch);
		x++;
		if (d > 0)
		{
			y--;
			d += 4 * (x - y) + 10;
		}
		else
			d += 4 * x + 6;

	}
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = left; i <= right; i++)
		A[top][i] = A[bottom][i] = ch;

	for (int i = top; i <= bottom; i++)
		A[i][left] = A[i][right] = ch;
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = left; i <= right; i++)
		for (int j = top; j <= bottom; j++)
			A[j][i] = ch;
}

void Canvas::SetPoint(int x, int y, char ch)
{
	A[x][y] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
	int dx = abs(x2 - x1);
	int dy = abs(y2 - y1);
	int sx = (x1 < x2) ? 1 : -1; // Directia pe x
	int sy = (y1 < y2) ? 1 : -1; // Directia pe y
	int err = dx - dy;

	while (true) 
	{
		// Check bounds before drawing
		if (x1 >= 0 && x1 < GetRows() && y1 >= 0 && y1 < GetCols())
			A[y1][x1] = ch;

		if (x1 == x2 && y1 == y2)
			break;

		int e2 = 2 * err;

		if (e2 > -dy) 
		{
			err -= dy;
			x1 += sx;
		}

		if (e2 < dx) 
		{
			err += dx;
			y1 += sy;
		}
	}
}

void Canvas::Print()
{
	for (int i = 0; i < rows; i++, cout << "\n")
	{
		for (int j = 0; j < cols; j++)
			cout << A[i][j];
	}
}

void Canvas::Clear()
{
	for (int i = 0; i < rows; i++)
		delete[] A[i];
	delete[] A;
}

int Canvas::GetRows()
{
	return rows;
}

int Canvas::GetCols()
{
	return cols;
}
