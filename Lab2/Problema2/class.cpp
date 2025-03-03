#include <iostream>
#include <cstring>
#include <cassert>

#include "class.h"

using namespace std;

void Student::Set_Name(char set_name[256])
{
	strcpy_s(name, set_name);
}

char* Student::Get_Name()
{
	return name;
}

void Student::Set_Grade_Math(float grade)
{
	assert(1 <= grade and grade <= 10);
	math = grade;
}

float Student::Get_Grade_Math()
{
	return math;
}

void Student::Set_Grade_Engl(float grade)
{
	assert(1 <= grade and grade <= 10);
	engl = grade;
}

float Student::Get_Grade_Engl()
{
	return engl;
}

void Student::Set_Grade_Hist(float grade)
{
	assert(1 <= grade and grade <= 10);
	hist = grade;
}

float Student::Get_Grade_Hist()
{
	return hist;
}

float Student::Get_Avg_Grade()
{
	return (math + engl + hist) / 3;
}

