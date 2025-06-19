#include "biblioteca.h"

biblioteca::biblioteca() {}

biblioteca::~biblioteca() {
	carti.clear();
	count = 0;
}

biblioteca& biblioteca::operator+=(carte* s) {
	carti.push_back(s);
	return (*this);
}

biblioteca::operator int() {
	return carti.size();
}

vector<carte*>::iterator biblioteca::begin() {
	return carti.begin();
}

vector<carte*>::iterator biblioteca::end() {
	return carti.end();
}

void biblioteca::PrintFilter(std::function<bool(carte*)> filter) {
	for (auto c : carti) {
		if (filter(c)) {
			std::cout << c->GetInfo() << std::endl;
		}
	}
}