#include "Toyota.h"

Toyota::Toyota(string colo) {
	name = "Toyota";
	color = colo;
}

string Toyota::GetColor() {
	return color;
}
string Toyota::GetName() {
	return "Toyota";
}