#include "Repo.h"

Shape* Repo::GetShape(string shape, string col) {
	if (shape == "Square") return new Square(col);
	if (shape == "Circle") return new Circle(col);
	if (shape == "Rectangle") return new Rectangle(col);
	return nullptr;
}

void Repo::Add(Shape* s) {
	sha.push_back(s);
}

void Repo::Remove(string info) {
	auto it = remove_if(sha.begin(), sha.end(), [&](Shape* e) {
		if (e->GetName() == info || e->GetColor() == info) return true;
		return false;
		});

	sha.erase(it, sha.end());
}

void Repo::PrintAll() {
	for (auto v : sha) {
		cout << "Shape: " << v->GetName() << '\n' << "Color: " << v->GetColor() << '\n';
	}
	cout << "------\n";
}