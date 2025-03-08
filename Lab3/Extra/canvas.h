#pragma once
#include <vector>
#include <cstdarg>
using namespace std;

class Canvas
{
private:
	int rows, cols;
	vector <vector<char> > A;
public :
	
	Canvas(int lines, int columns);
	void set_pixel(int x, int y, char value);
	void set_pixels(int count, ...);
	void clear();
	void print() const;
};

