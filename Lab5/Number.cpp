#include "Number.h"

Number::Number(const char* value, int base) 
{
	x = new char[strlen(value) + 1];
	strcpy_s(x, strlen(value) + 1, value);
	baza = base;
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

