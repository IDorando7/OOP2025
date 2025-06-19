#include "CarView.h"

void CarView::printCarDetails(string name, int year, string type, int door) {
	cout << "-----\nCar:\n";
	cout << "Model: " << name << " | Year: " << year << " | Type: " << type << " | Doors Number: " << door << '\n';
}