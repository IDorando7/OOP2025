#include "Math.h"
#include <iostream>
using namespace std;

int main()
{
	int a[] = { 2, 5, 7 };
	double b[] = { 3.1, 5.6, 4.7 };
	const char* s1 = "asf";
	const char* s2 = "fqw";
	
	Math obj;
	
	cout << obj.Add(a[0], a[1]) << "\n";
	cout << obj.Add(a[0], a[1], a[2]) << "\n";
	cout << obj.Add(b[0], b[1]) << "\n";
	cout << obj.Add(b[0], b[1], b[2]) << "\n";

	cout << obj.Mul(a[0], a[1]) << "\n";
	cout << obj.Mul(a[0], a[1], a[2]) << "\n";
	cout << obj.Mul(b[0], b[1]) << "\n";
	cout << obj.Mul(b[0], b[1], b[2]) << "\n";

	cout << obj.Add(3, 2, 5, 4, 3, 6) << "\n";
	cout << obj.Add(s1, s2) << "\n";

	return 0;
}