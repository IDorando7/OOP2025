#include "Entry.h"

Entry::Entry(string _name) {
	name = _name;
}

Entry::Entry() {}

string Entry::GetName() {
	return name;
}