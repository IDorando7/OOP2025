#include "BestRomana.h"

void BestRomana::Run(Student* p, int count)
{
	int sol = 0;
	Student* CrisLaSO = p;
	for (int i = 1; i <= count; i++)
	{
		if (sol < p->romana)
		{
			sol = p->romana;
			CrisLaSO = p;
		}
		p++;
	}
	cout << GetName() << " = " << CrisLaSO->name << " with grade: " << sol << "\n";
}

string BestRomana::GetName()
{
	return "BestRomana";
}
