#include "Database.h"

Database& Database::operator+=(Entry* t)
{
    v.push_back(t);
    return *this;
}

Database& Database::operator-=(string t)
{
    v.erase(remove_if(v.begin(), v.end(), [t](Entry* e) {return e->GetName() == t; }), v.end());
    return *this;
}

vector<Entry*>::iterator Database::begin()
{
    return v.begin();
}

vector<Entry*>::iterator Database::end()
{
    return v.end();
}

void Database::Print()
{
    for (auto w : v)
        w->Print();
    cout << "\n";
}
