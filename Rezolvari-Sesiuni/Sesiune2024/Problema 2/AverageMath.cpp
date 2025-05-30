#include "AverageMath.h"

void AverageMath::Run(Student* p, int count)
{
	int sol = 0;
	for (int i = 1; i <= count; i++)
	{
		sol += p->mate;
		p++;
	}
	cout << GetName() << " = " << double(sol / count) << "\n";
}

string AverageMath::GetName()
{
	return "AverageMath";
}
