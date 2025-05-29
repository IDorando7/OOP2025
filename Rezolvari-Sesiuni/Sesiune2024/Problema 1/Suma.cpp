#include "Suma.h"

void Suma::Run(int* a, int count)
{
    int sol = 0;
    while (count--)
    {
        sol += *a;
        a++;
    }
    cout << "Suma = " << sol << "\n";
}
