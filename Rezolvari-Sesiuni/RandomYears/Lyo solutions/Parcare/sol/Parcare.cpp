#include "Parcare.h"

void Parcare::Create(int _max) {
	max_cap = _max;
}

bool Parcare::Add(Masina* s) {
	if (v.size() < max_cap) {
		v.push_back(s);
		return true;
	}
	return false;
}

Parcare& Parcare::RemoveByName(string _name) {
	auto it = remove_if(v.begin(), v.end(), [&](Masina * e){
		if (e->GetName() == _name) {
			delete e;
			return true;
			}
		return false;
		});

	v.erase(it, v.end());
	return (*this);
}

int Parcare::GetCount() {
	return v.size();
}

bool Parcare::IsFull() {
	//if (v.size() == max_cap) return true;
	//return false;
	return v.size() == max_cap;
}

void Parcare::ShowAll() {
	cout << "SHOW-ALL:";
	for (auto e : v) {
		cout << e->GetName() << "(" << e->GetColor() << "), ";
	}
	cout << '\n';
}

void Parcare::ShowByColor(string _color) {
	cout << "SHOW-COLOR:(" <<_color<<"):";
	for (auto e : v) {
		if(e->GetColor() == _color)
		cout << e->GetName() << ", ";
	}
	cout << '\n';
}