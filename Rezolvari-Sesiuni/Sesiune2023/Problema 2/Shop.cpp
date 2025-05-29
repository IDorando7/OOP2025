#include "Shop.h"

Shop& Shop::Add(Article* articol)
{
    v.push_back(articol);
    return *this;
}

int Shop::GetTotalPrice()
{
    int sol = 0;
    for (auto w : v)
        sol += w->GetPrice() * w->GetQuantity();
    return sol;
}

int Shop::GetQuantity(string s)
{
    int sol = 0;
    for (auto w : v)
        if (w->GetType() == s)
            sol += w->GetQuantity();
    return sol;
}

void Shop::List()
{
    for (auto w : v)
        w->Print();
}
