#include "Book.h"
#include "PriceVisitor.h"
#include "DetailsVisitor.h"

Book::Book() {
	price = 0;
	nrPages = 0;
}

Book::Book(int p, int page) {
	price = p;
	nrPages = page;
}

void Book::Accept(Visitor* a) {
	if (auto it = dynamic_cast<PriceVisitor*>(a)) {
		a->Visit(this);
	}
	else {
		if (auto it = dynamic_cast<DetailsVisitor*>(a)) {
			a->Visit(this);
		}
	}
}

int Book::GetNrPages() {
	return nrPages;
}

int Book::GetPrice() {
	return price;
}

void Book::AddAuthor(Author* a) {
	autors.push_back(a);
}

vector<Author*> Book::GetAutors() {
	return autors;
}