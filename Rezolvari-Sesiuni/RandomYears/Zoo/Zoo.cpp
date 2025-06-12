#include "Zoo.h"

vector<Animal*> Zoo::GetFishes()
{
    vector<Animal*> an;
    for (auto w : v)
        if (w->IsAFish() == 1)
            an.push_back(w);
    return an;
}

vector<Animal*> Zoo::GetBirds()
{
    vector<Animal*> an;
    for (auto w : v)
        if (w->IsABird() == 1)
            an.push_back(w);
    return an;
}

vector<Animal*> Zoo::GetMammals()
{
    vector<Animal*> an;
    for (auto w : v)
        if (w->IsAMammal() == 1)
            an.push_back(w);
    return an;
}

vector<Feline*> Zoo::GetFelines()
{
    vector<Feline*> an;
    for (auto w : v)
        if (dynamic_cast<Feline*>(w) != 0)
            an.push_back(dynamic_cast<Feline*>(w));
    return an;
}

int Zoo::GetTotalAnimals()
{
    return v.size();
}

Zoo& Zoo::operator+=(Animal* t)
{
    v.push_back(t);
    return *this;
}

bool Zoo::operator()(string name)
{
    for (auto w : v)
        if (w->GetName() == name)
            return 1;
    return 0;
}
