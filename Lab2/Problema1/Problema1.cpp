#include <iostream>
#include "NumberList.h"

using namespace std;

int main()
{
	NumberList a;
	int n, x;
	cin >> n;
	a.Init();
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		a.Add(x);
	}
	a.Sort();
	a.Print();

	return 0;
}