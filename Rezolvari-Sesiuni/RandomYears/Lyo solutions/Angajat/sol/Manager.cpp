#include "Manager.h"

void Manager::Lucreaza() {
	cout << "===============\n" << echip_name << "\n================\n" << echip_name << '\n';
	for (auto e : angaj) {
		e->Lucreaza();
	}
	cout << "===============\n";
}

bool Manager::Angajeaza(Angajat* x) {
	angaj.push_back(x);
	return true;
}

bool Manager::Concediaza(Angajat* x) {
	auto it = remove_if(angaj.begin(), angaj.end(), [&](Angajat* e) {
		if (e->GetId() == x->GetId()) return true;
		return false;
		});

	if (it != angaj.end()) {
		angaj.erase(it, angaj.end());
		return true;
	}
	else {
		return false;
	}
}

Angajat* Manager::GetAngajat(int _id) {
	for (auto e : angaj) {
		if (e->GetId() == _id) return e;
	}
	return nullptr;
}