#include "fractie.h"

fractie::fractie()
{
	x = y = 0;
}

fractie::fractie(int _x, int _y)
{
	x = _x;
	y = _y;
}

fractie::fractie(const char* s)
{
	int nr = 0, ok = 0;
	x = 1; // ca sa nu planga compilatorul
	y = 1; // ca sa nu planga compilatorul x2
	for (int i = 0; s[i]; i++)
		if (s[i] == '/')
		{
			ok = 1;
			x = nr;
			nr = 0;
		}
		else if ('0' <= s[i] and s[i] <= '9') 
			nr = nr * 10 + s[i] - '0';
	if (ok == 0)
	{
		x = nr;
		y = 1;
	}
	else
		y = nr;
}

void fractie::print()
{
	std::cout << x << "/" << y;
}

int __gcd(int x, int y)
{
	int r;
	while (y)
	{
		r = x % y;
		x = y;
		y = r;
	}
	return x;
}

fractie fractie::simplify()
{
	int gcd = __gcd(x, y);
	int _x = x / gcd;
	int _y = y / gcd;
	return fractie (_x, _y);
}

int fractie::operator[](const char * s)
{
	if (s == "numerator")
		return x;
	if (s == "denominator")
		return y;
}

fractie operator-(fractie A, fractie B)
{
	fractie C;
	int numitor = A.y * B.y / __gcd(A.y, B.y);
	C.y = numitor;
	C.x = A.x * (numitor / A.y) - B.x * (numitor / B.y);
	return C;
}

fractie operator+(fractie A, fractie B)
{
	fractie C;
	int numitor = A.y * B.y / __gcd(A.y, B.y);
	C.y = numitor;
	C.x = A.x * (numitor / A.y) + B.x * (numitor / B.y);
	return C;
}

fractie operator*(fractie A, fractie B)
{
	fractie C(A.x * B.x, A.y * B.y);
	return C;
}

bool operator==(fractie A, fractie B)
{
	return (A.x * B.y == A.y * B.x);
}
