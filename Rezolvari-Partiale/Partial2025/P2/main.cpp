#include "Painter.h"

Directie operator"" _right(unsigned long long int x)
{
	unsigned long long int val = x;
	return { 'R', val };
};

Directie operator"" _left(unsigned long long int x)
{
	unsigned long long int val = x;
	return { 'L', val };
};

Directie operator"" _up(unsigned long long int x)
{
	unsigned long long int val = x;
	return { 'U', val };
};

Directie operator"" _down(unsigned long long int x)
{
	unsigned long long int val = x;
	return { 'D', val };
};

int main()
{
    Painter p(10, 4);
    ((((p += 3_right) += 2_down) += 3_right) += 2_up) += 2_left;
    p.print();
    p(0, 3) = 'C';
    p(1, 3) = 'P';
    p(2, 3) = 'P';
    p.print();
    std::cout << "Area = " << (int)p << std::endl;
}
