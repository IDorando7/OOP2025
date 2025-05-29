#include "Find.h"

Find::Find(function<bool(int)> p)
{
	pred = p;
}

void Find::Run(int* a, int count)
{
	int sol = 0;
	while (count--)
	{
		if (pred(*a))
			sol++;
		a++;
	}
	cout << "Find = " << sol << " elements\n";
}
