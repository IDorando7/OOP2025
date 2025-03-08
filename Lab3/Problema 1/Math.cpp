#include "Math.h"
#include <cstdarg>
#include <cstring>

int Math::Add(int a, int b)
{
	return a + b;
}

int Math::Add(int a, int b, int c)
{
	return a + b + c;
}

int Math::Add(double a, double b)
{
	return a + b;
}

int Math::Add(double a, double b, double c)
{
	return a + b + c;
}

int Math::Mul(int a, int b)
{
	return a * b;
}

int Math::Mul(int a, int b, int c)
{
	return a * b * c;
}

int Math::Mul(double a, double b)
{
	return a * b;
}

int Math::Mul(double a, double b, double c)
{
	return a * b * c;
}

int Math::Add(int count, ...)
{
    va_list args;
    va_start(args, count);

    int sum = 0;
    for (int i = 0; i < count; ++i)
    {
        sum += va_arg(args, int);
    }

    va_end(args);
    return sum;
}

char* Math::Add(const char* str1, const char* str2)
{
    if (!str1 || !str2)
        return nullptr;

    int len1 = std::strlen(str1);
    int len2 = std::strlen(str2);

    char* result = new char[len1 + len2 + 1];

    if (strcpy_s(result, len1 + len2 + 1, str1) != 0 ||
        strcat_s(result, len1 + len2 + 1, str2) != 0) {
        delete[] result;
        return nullptr;
    }

    return result;
}
