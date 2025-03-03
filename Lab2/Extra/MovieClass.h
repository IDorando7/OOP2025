#pragma once
#include <cstring>
#include <bits/stdc++.h>

class Movie
{
	char name[256];
	int release, duration;
	double score;

public:
	
	void set_name(const char s[256]);
	char* Get_Name();

	void set_year(int _release);
	int Get_Release();

	void set_score(double _score);
	double Get_Score();

	void set_length(int _duration);
	int Get_Duration();

	int PassedYears();

};