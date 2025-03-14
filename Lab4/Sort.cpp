#include "Sort.h"
#include <cstdarg>
   

Sort::Sort(int _n, int minimum, int maximum)
{
	n = _n;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		int x = rand() % (maximum - minimum + 1);
		x += minimum; // x apartine [minimum, maximum]
		a[i] = x;
	}
}

Sort::Sort(std::initializer_list<int> List)
{
	n = List.size();
	a = new int[n];
	int cnt = -1;
	for (int it : List)
		a[++cnt] = it;
}

Sort::Sort(int count, int* _a)
{
	n = count;
	a = new int[n];
	for (int i = 0; i < n; i++)
		a[i] = _a[i];
}

Sort::Sort(int count, ...)
{
	n = count;
	a = new int[n];
	va_list args;
	va_start(args, count);
	for (int i = 0; i < n; i++)
	{
		int x = va_arg(args, int);
		a[i] = x;
	}
	va_end(args);

}

Sort::Sort(const char* s1)
{
	char* p;
	char* s = new char[strlen(s1)];
	strcpy(s, s1);
	int cnt = -1;
	n = 1;
	for (int i = 0; s[i]; i++)
		n += s[i] == ',';
	a = new int[n];
	p = strtok(s, ",");
	while (p != NULL)
	{
		int val = 0;
		for (int i = 0; p[i]; i++)
			val = val * 10 + p[i] - '0';
		a[++cnt] = val;
		p = strtok(NULL, ",");
	}
}

void Sort::InsertSort(bool ascendent)
{
	int i, j, x;
	for (i = 1; i < n; i++)
	{
		j = i - 1;
		x = a[i];
		while (j >= 0 and ((a[j] > x and ascendent == true) or (a[j] < x and ascendent == false)))
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = x;
	}
}

int Partitionare(int st, int dr, Sort* obj, bool ascendent)
{
	int pivot = obj->a[st];
	int i = st + 1;
	int j = dr;
	while (i <= j)
	{
		if ((obj->a[i] <= pivot and ascendent == true) or (obj->a[i] >= pivot and ascendent == false))
			i++;
		if ((obj->a[j] >= pivot and ascendent == true) or (obj->a[j] <= pivot and ascendent == false))
			j--;
		if (i < j and ((obj->a[i] > pivot and ascendent == true) or (obj->a[i] < pivot and ascendent == false))
			and ( (pivot > obj->a[j] and ascendent == true) or (pivot < obj->a[j] and ascendent == false)))
		{
			std::swap(obj->a[i], obj->a[j]);
			i++;
			j--;
		}
	}
	i--; 
	std::swap(obj->a[st], obj->a[i]);
	return i;
}

void TheRealQuickSort(int st, int dr, Sort *obj, bool ascendent)
{
	if (st < dr)
	{
		int k = Partitionare(st, dr, obj, ascendent);
		TheRealQuickSort(st, k - 1, obj, ascendent);
		TheRealQuickSort(k + 1, dr, obj, ascendent);
	}
}

void Sort::QuickSort(bool ascendent)
{
	TheRealQuickSort(0, n - 1, this, ascendent);
}

void Sort::BubbleSort(bool ascendent)
{
	bool flag = 1;
	int i;
	while (flag == 1)
	{
		flag = 0;
		for (i = 0; i < n - 1; i++)
			if ((a[i] > a[i + 1] and ascendent == true) or (a[i] < a[i + 1] and ascendent == false))
			{
				std::swap(a[i], a[i + 1]);
				flag = 1;
			}
	}
}

void Sort::Print()
{
	for (int i = 0; i < n; i++)
		std::cout << a[i] << " ";
	std::cout << "\n";
}

int Sort::GetElementsCount()
{
	return n;
}

int Sort::GetElementFromIndex(int index)
{
	return a[index];
}


