#include "Number.h"

Number::Number()
{
	// I Will not write code for people who dont initialize
}

Number::Number(int value, int base)
{
	int len = log10(value) + 1;
	x = new char[len + 1];
	char str[100];
	_itoa(value, str, 10);
	for (int i = 0; i < strlen(str); i++)
		x[i] = str[i];
	x[strlen(str)] = '\0';
	baza = base;
}

Number::Number(const char* value, int base)
{
	x = new char[strlen(value) + 1];
	strcpy_s(x, strlen(value) + 1, value);
	baza = base;
}

Number::Number(const Number& other)
{
	x = new char[strlen(other.x) + 1];
	strcpy(x, other.x);
	baza = other.baza;
}

Number::Number(Number&& other)
{
	x = other.x;
	baza = other.baza;
	other.x = nullptr;
}

Number::~Number()
{
	baza = -1;
	delete[] x;
}

int Convert(char ch)
{
	if (isdigit(ch))
		return ch - '0';
	return ch - 'A' + 10;
}

char Convert(int nr)
{
	if (0 <= nr and nr <= 9)
		return nr + '0';
	return 'A' + nr - 10;
}

int strlen(char s[])
{
	int i;
	for (i = 0; s[i]; i++)
		;
	return i;
}

Number& Number::operator--() // remove first
{
	int i;
	for (i = 1; x[i]; i++)
		x[i - 1] = x[i];
	x[i - 1] = '\0';
	return (*this);
}

Number Number::operator--(int) // remove last
{
	Number temp(x, baza);
	x[strlen(x) - 1] = '\0';
	return temp;
}

bool Number::operator=(int val)
{
	int len = log10(val) + 1;
	x = new char[len + 1];
	char str[100];
	_itoa(val, str, 10);
	for (int i = 0; i < strlen(str); i++)
		x[i] = str[i];
	x[strlen(str)] = '\0';
	baza = 10;
	return 1;
}

bool Number::operator=(const char* sir)
{
	x = new char[strlen(sir) + 1];
	for (int i = 0; i < strlen(sir); i++)
		x[i] = sir[i];
	x[strlen(sir)] = '\0';
	baza = 10;
	return true;
}

bool Number::operator=(Number A)
{
	delete[] x;
	x = new char[strlen(A.x) + 1];
	int i;
	for (i = 0; i < strlen(A.x); i++)
		x[i] = A.x[i];
	x[strlen(A.x)] = '\0';
	baza = A.baza;
	return true;
}

bool operator+=(Number& A, Number B)
{
	A = A + B;
	return true;
}

void Number::SwitchBase(int newBase)
{
	/// transformam in baza 10
	int nr = 0, p = 1;
	for (int i = strlen(x) - 1; i >= 0; i--, p *= baza)
		nr += p * Convert(x[i]);
	
	/// transformama in newBase
	int top = -1;
	char st[100];
	for (int i = 0; i < 100; i++) st[i] = NULL;
 	while (nr)
	{
		st[++top] = Convert(nr % newBase);
		nr /= newBase;
	}
	for (int i = 0, j = top; i <= j; i++, j--)
		swap(st[i], st[j]);
	x = new char [strlen(st) + 1];
	//strcpy_s(x, strlen(st) + 1, st);
	for (int i = 0; i < strlen(st); i++)
		x[i] = st[i];
	x[strlen(st)] = '\0';
	baza = newBase;
}

void Number::Print()
{
	cout << x << "\n";
}

int Number::GetDigitsCount()
{
	int i = 0;
	while (x[i])
		i++;
	return i;
}

int Number::GetBase()
{
	return baza;
}

Number operator+ (Number A, Number B)
{
	int ok = (A.baza >= B.baza) ? A.baza : B.baza;
	A.SwitchBase(10);
	B.SwitchBase(10);
	int nr1 = 0, nr2 = 0;
	for (int i = 0; A.x[i]; i++)
		nr1 = nr1 * 10 + A.x[i] - '0';
	for (int i = 0; B.x[i]; i++)
		nr2 = nr2 * 10 + B.x[i] - '0';
	nr1 += nr2;
	int len = log10(nr1) + 1;
	char* sol = new char[len];
	char str[100];
	_itoa(nr1, str, 10);
	//strcpy(sol, str);
	for (int i = 0; i < strlen(str); i++)
		sol[i] = str[i];
	sol[strlen(str)] = '\0';
	Number C(sol, 10);
	C.SwitchBase(ok);
	return C;
}

Number operator- (Number A, Number B)
{
	int ok = (A.baza >= B.baza) ? A.baza : B.baza;
	A.SwitchBase(10);
	B.SwitchBase(10);
	int nr1 = 0, nr2 = 0;
	for (int i = 0; A.x[i]; i++)
		nr1 = nr1 * 10 + A.x[i] - '0';
	for (int i = 0; B.x[i]; i++)
		nr2 = nr2 * 10 + B.x[i] - '0';
	nr1 -= nr2;
	int len = log10(nr1) + 1;
	char* sol = new char[len];
	char str[100];
	_itoa(nr1, str, 10);
	for (int i = 0; i < strlen(str); i++)
		sol[i] = str[i];
	sol[strlen(str)] = '\0';
	Number C(sol, 10);
	C.SwitchBase(ok);
	return C;
}

char Number::operator[] (int index)
{
	if (!(0 <= index and index < strlen(x)))
	{
		cout << "Index-ul tau nu e bun\n";
		return -1;
	}
	return x[strlen(x) - 1 - index];
}

int CompareThoseStrings(char* sir1, char* sir2)
{
	int len1 = strlen(sir1);
	int len2 = strlen(sir2);
	if (len1 < len2)
		return -1;
	if (len1 > len2)
		return 1;
	for (int i = 0; i < len1; i++)
	{
		if (sir1[i] < sir2[i])
			return -1;
		if (sir1[i] > sir2[i])
			return 1;
	}
	return 0;
}

bool operator== (Number A, Number B)
{
	if (A.baza == B.baza)
		return (CompareThoseStrings(A.x, B.x) == 0);
	A.SwitchBase(B.baza);
	return (CompareThoseStrings(A.x, B.x) == 0);
}

bool operator>=(Number A, Number B)
{
	if (A.baza == B.baza)
		return (CompareThoseStrings(A.x, B.x) >= 0);
	A.SwitchBase(B.baza);
	return (CompareThoseStrings(A.x, B.x) >= 0);
}

bool operator<=(Number A, Number B)
{
	if (A.baza == B.baza)
		return (CompareThoseStrings(A.x, B.x) <= 0);
	A.SwitchBase(B.baza);
	return (CompareThoseStrings(A.x, B.x) <= 0);
}

bool operator>(Number A, Number B)
{
	if (A.baza == B.baza)
		return (CompareThoseStrings(A.x, B.x) > 0);
	A.SwitchBase(B.baza);
	return (CompareThoseStrings(A.x, B.x) > 0);
}

bool operator<(Number A, Number B)
{
	if (A.baza == B.baza)
		return (CompareThoseStrings(A.x, B.x) < 0);
	A.SwitchBase(B.baza);
	return (CompareThoseStrings(A.x, B.x) < 0);
}


