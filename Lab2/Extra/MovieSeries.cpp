#include <bits/stdc++.h>
#include "MovieSeries.h"
#include "MovieClass.h"

using namespace std;

void MovieSeries::init()
{
	count = 0;
}

void MovieSeries::add(Movie* _movie)
{
	if (count >= 16)
		return;
	series[count++] = _movie;
}

void MovieSeries::print()
{
	for (int i = 0; i < count; i++)
	{
		cout << "Movie Index " << i << "\n";
		cout << "Movie Name " << series[i]->Get_Name() << "\n";
		cout << "Movie Release" << series[i]->Get_Release() << "\n";
		cout << "Movie Score" << series[i]->Get_Score() << "\n";
		cout << "Movie Duration" << series[i]->Get_Duration() << "\n\n\n";
	}
}

void MovieSeries::sort()
{
	for (int i = 0; i < count - 1; i++)
		for (int j = i + 1; j < count; j++)
			if (series[i]->PassedYears() < series[j]->PassedYears())
				swap(series[i], series[j]);
}