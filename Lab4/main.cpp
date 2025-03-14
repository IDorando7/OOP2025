#include <bits/stdc++.h>
#include "Sort.h"

using namespace std;

int main()
{
	int ChooseConstructor;
	cin >> ChooseConstructor;
	switch (ChooseConstructor)
	{
		case 1: 
		{
			Sort obj(10, 44, 369);
			obj.Print();
			break;
		}
		
		case 2:
		{
			Sort obj({ 324, 2451, 420, 213124, 69, 236923 });
			obj.Print();
			break;
		}

		case 3:
		{
			int* v = new int[3] {3, 4, 7};
			Sort obj(3, v);
			obj.Print();
			break;
		}

		case 4:
		{
			Sort obj(6, 324, 2451, 420, 213124, 69, 236923);
			obj.Print();
			obj.QuickSort(true);
			obj.Print();
			break;
		}

		case 5:
		{
			const char* sir = { "10,40,100,5,70" };
			Sort obj(sir);
			obj.Print();
			break;
		}
	}
	
	
	return 0;
}