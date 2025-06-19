#pragma once
#include <bits/stdc++.h>
using namespace std;

class Author {
private:
	string surname;
	string firstname;
public:
	Author();
	Author(string sur, string first);
	string GetSurname();
	string GetFirstname();
};

