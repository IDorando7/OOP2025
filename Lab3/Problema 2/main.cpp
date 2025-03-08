#include <bits/stdc++.h>
#include "Canvas.h"
using namespace std;

int main()
{
	Canvas c(50, 50);
	c.DrawCircle(10, 10, 7, '*');
	c.FillCircle(40, 10, 7, '*');
	c.DrawRect(5, 20, 25, 30, '*');
	c.FillRect(35, 20, 45, 30, '*');
	c.DrawLine(5, 30, 15, 40, '*');
	c.SetPoint(40, 35, '$');
	c.Print();
	c.Clear();
	return 0;
}