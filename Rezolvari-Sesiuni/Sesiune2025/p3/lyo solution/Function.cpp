#include "Function.h"

vector<string> TokenText(string text, vector<string>* op) {
	string word;
	vector<string> ar;
	vector<string> ar1;
	op->clear();
	int i = 0, count = 0;
	while (i != text.size()) {
		if (text[i] == ' ') {
			if (!word.empty()) {
				ar.push_back(word);
				word.clear();
			}
		}
		else {
			word += text[i];
		}
		i++;
	}

	if (!word.empty()) {
			ar.push_back(word);
			word.clear();
	}

	for (auto e : ar) {
		if ((e[0] == '+' || e[0] == '*' || e[0] == '-' || e[0] == '/')) {
			ar1.push_back(e);
		}
		else {
			op->push_back(e);
		}
	}

	return ar1;
}

Function::Function(string text) {
	arg = TokenText(text, &op);
}

bool Function::validate() {
	for (auto e : arg) {
		for (int i = 0; i < e.size(); i++) {
			if (e.size() == 1) {
				if (e[0] == '+' || e[0] == '-') {}
				else {
					throw runtime_error("Invalid expression, wrong operator");
				}
			}
		}
	}

	for (auto e : op) {
		for (int i = 0; i < e.size(); i++) {
			if (!isdigit(e[i])) {
				throw runtime_error("Invalid stoi argument");
			}
		}
	}
	if(arg.size() == 0 && op.size() == 1) {}
	else {
		if ((arg.size() + 1) != op.size()) throw runtime_error("Invalid expression, incorect number of tokens");
		else {
			return true;
		}
	}
}
string Function::eval() {
	string rez;
	int r = stoi(op[0]);
	for (int i = 0; i < arg.size(); i++) {
		if (arg[i][0] == '+') {
			r = r + stoi(op[i + 1]);
		}
		if (arg[i][0] == '-') {
			r = r - stoi(op[i + 1]);
		}
	}
	rez = to_string(r);
	return rez;
}
string Function::value(int index) {
	if (index < 0 || index> op.size()) {
		throw out_of_range("Invalid value position");
	}
	return op[index - 1];
}