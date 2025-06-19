#include "DetailsVisitor.h"

void DetailsVisitor::Visit(Book* b) {
	cout << "Cartea are " << b->GetNrPages() << " pagini, iar autorii sunt: ";
	for (auto e : b->GetAutors()) {
		cout << "\"" << e->GetSurname() << " " << e->GetFirstname() << "\", ";
	}
	cout << '\n';
}

void DetailsVisitor::Visit(Pen* p) {
	cout << "Pixul este de culoare " << p->GetColor() << '.\n';
}