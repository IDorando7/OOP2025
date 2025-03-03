#pragma once
#include "MovieClass.h"
#include <bits/stdc++.h>

int movie_compare_name(Movie a, Movie b);

int movie_compare_length(Movie a, Movie b);

int movie_compare_year(Movie a, Movie b);
int movie_compare_score(Movie a, Movie b);

int movie_compare_passed_years(Movie a, Movie b); // 1 if it is older