#pragma once

class Student
{
	char name[256];
	float math, engl, hist, avg;

public:
	
	void Set_Name(char name[256]);
	char* Get_Name();

	void Set_Grade_Math(float grade);
	float Get_Grade_Math();

	void Set_Grade_Engl(float grade);
	float Get_Grade_Engl();

	void Set_Grade_Hist(float grade);
	float Get_Grade_Hist();

	float Get_Avg_Grade();
};