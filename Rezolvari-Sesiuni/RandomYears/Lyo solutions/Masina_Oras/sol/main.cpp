#include "Opel.h"
#include "Dacia.h"
#include "RangeRover.h"

int main() {
	Opel o;
	o.setCapacitate(100); o.setCuloare("rosu"); o.setAnFabricatie(2000);
	MasinaOras* m = &o;
	cout << m->getName() << "," << m->getCuloare() << "," << m->getCapacitate() << "," << o.getAnFabricatie() << endl;
	return 1;
}