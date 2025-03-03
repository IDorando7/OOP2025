#include "MovieClass.h"
#include <bits/stdc++.h>

void Movie::set_name(const char s[256])
{
	strcpy_s(name, s);
}

char* Movie::Get_Name()
{
	return name;
}

void Movie::set_year(int _release)
{
	release = _release;
}

int Movie::Get_Release()
{
	return release;
}

void Movie::set_score(double _score)
{
	score = _score;
}

double Movie::Get_Score()
{
	return score;
}

void Movie::set_length(int _duration)
{
	duration = _duration;
}

int Movie::Get_Duration()
{
	return duration;
}

int Movie::PassedYears()
{
	return 2025 - release;
}