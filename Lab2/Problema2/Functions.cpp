#include "class.h"
#include <cstring>

int Compare_Names(Student a, Student b)
{
	int val = strcmp(a.Get_Name(), b.Get_Name());
	if (val < 0)
		return -1;
	if (val > 0)
		return 1;
	return 0;
}

int Compare_Math(Student a, Student b)
{
	float grade1 = a.Get_Grade_Math(), grade2 = b.Get_Grade_Math();
	if (grade1 < grade2)
		return -1;
	if (grade1 > grade2)
		return 1;
	return 0;
}

int Compare_Engl(Student a, Student b)
{
	float grade1 = a.Get_Grade_Engl(), grade2 = b.Get_Grade_Engl();
	if (grade1 < grade2)
		return -1;
	if (grade1 > grade2)
		return 1;
	return 0;
}

int Compare_Hist(Student a, Student b)
{
	float grade1 = a.Get_Grade_Hist(), grade2 = b.Get_Grade_Hist();
	if (grade1 < grade2)
		return -1;
	if (grade1 > grade2)
		return 1;
	return 0;
}

int Compare_Avg(Student a, Student b)
{
	float grade1 = a.Get_Avg_Grade(), grade2 = b.Get_Avg_Grade();
	if (grade1 < grade2)
		return -1;
	if (grade1 > grade2)
		return 1;
	return 0;
}