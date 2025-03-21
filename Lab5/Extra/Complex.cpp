#include "Complex.h"

Complex::Complex(int _re, int _im) : re(_re), im(_im) {}

Complex operator+(Complex a, Complex b)
{
	return Complex(a.re + b.re, a.im + b.im);
}

Complex operator+(Complex a, int x)
{
	return Complex(a.re + x, a.im);
}

Complex operator+(int x, Complex b)
{
	return Complex(x + b.re, b.im);
}

Complex operator-(Complex a, Complex b)
{
	return Complex(a.re - b.re, a.im - b.im);
}

Complex operator-(Complex a, int x)
{
	return Complex(a.re - x, a.im);
}

Complex operator-(int x, Complex b)
{
	return Complex(x - b.re, b.im);
}

Complex operator*(Complex a, Complex b)
{
	return Complex(a.re * b.re - a.im * b.im, a.re * b.im + a.im * b.re);
}

Complex operator*(Complex a, int x)
{
	return Complex(a.re * x, a.im * x);
}

Complex operator*(int x, Complex b)
{
	return Complex(x * b.re, x * b.im);
}

bool operator==(Complex a, Complex b)
{
	return (a.re == b.re and a.im == b.im);
}

bool operator!=(Complex a, Complex b)
{
	return !(a == b);
}

bool Complex::operator-(Complex& a)
{
	a.re *= -1;
	a.im *= -1;
	return true;
}

std::ostream& operator<<(std::ostream& os, const Complex& c) 
{
	os << "(" << c.re << ", " << c.im << ")";
	return os;
}

Complex& Complex::operator++()
{
	re++;
	return *this;
}

Complex Complex::operator++(int val)
{
	Complex temp(re, im);
	++(*this);
	return temp;
}

Complex& Complex::operator--()
{
	re--;
	return *this;
}

Complex Complex::operator--(int val)
{
	Complex temp(re, im);
	--(*this);
	return temp;
}

void Complex::operator()()
{
	std::cout << "Complex number: " << *this << "\n";
}

