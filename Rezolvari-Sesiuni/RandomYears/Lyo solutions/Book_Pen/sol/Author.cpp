#include "Author.h"

Author::Author() {
	surname = "surname";
	firstname = "firstname";
}

Author::Author(string sur, string first) {
	surname = sur;
	firstname = first;
}

string Author::GetSurname() {
	return surname;
}

string Author::GetFirstname() {
	return firstname;
}