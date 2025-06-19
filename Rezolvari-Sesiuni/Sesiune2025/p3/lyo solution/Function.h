#pragma once
#include <bits/stdc++.h>
using namespace std;

class Function {
private:
	vector<string> arg;
	vector<string> op;
public:
	Function(string text);
	bool validate();
	string eval();
	string value(int index);
	//int iterate_values(function<void() >& f);
	template<typename Func>
	void iterate_values(Func&& f) const {
		for (auto v : op) {
			int e = std::stoi(v);
			f(e);
		}
	}

};

