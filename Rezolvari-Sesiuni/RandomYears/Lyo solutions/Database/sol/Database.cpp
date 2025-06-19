#include "Database.h"

Database& Database::operator+=(Entry* s) {
	entr.push_back(s);
	return (*this);
}

Database& Database::operator-=(string s) {
	auto it = remove_if(entr.begin(), entr.end(), [&](Entry* e) {
		if (e->GetName() == s) {
			delete e;
			return true;
		}
		return false;
		});

	entr.erase(it, entr.end());

	return (*this);
}

vector<Entry*>::iterator Database::begin() {
	return entr.begin();
}

vector<Entry*>::iterator Database::end() {
	return entr.end();
}

void Database::Print() {
	for (auto e : entr) {
		e->Print();
		cout << '\n';
	}
}