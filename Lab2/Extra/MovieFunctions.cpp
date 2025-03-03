#include "MovieClass.h"
#include <bits/stdc++.h>

int movie_compare_name(Movie a, Movie b)
{
	int value = strcmp(a.Get_Name(), b.Get_Name());
	if (value < 0)
		return -1;
	if (value > 0)
		return 1;
	return 0;
}

int movie_compare_year(Movie a, Movie b)
{
	int val1 = a.Get_Release(), val2 = b.Get_Release();
	if (val1 > val2)
		return 1;
	if (val1 < val2)
		return -1;
	return 0;
}

int movie_compare_length(Movie a, Movie b)
{
	int val1 = a.Get_Duration(), val2 = b.Get_Duration();
	if (val1 > val2)
		return 1;
	if (val1 < val2)
		return -1;
	return 0;
}

int movie_compare_score(Movie a, Movie b)
{
	double val1 = a.Get_Score(), val2 = b.Get_Score();
	if (val1 > val2)
		return 1;
	if (val1 < val2)
		return -1;
	return 0;
}

int movie_compare_passed_years(Movie a, Movie b) // 1 if it is older
{
	int val1 = a.PassedYears(), val2 = b.PassedYears();
	if (val1 > val2)
		return 1;
	if (val1 < val2)
		return -1;
	return 0;
}