#include "MyVector.h"

MyVector& MyVector::operator+=(int x)
{
    d.push_back(x);
    return (*this);
}

MyVector& MyVector::operator+=(Procesator* s)
{
    v.push_back(s);
    return (*this);
}

MyVector& MyVector::operator+=(initializer_list<int> l)
{
    for (int x : l)
        d.push_back(x);
    return (*this);
}

MyVector::operator int()
{
    return d.size();
}

MyVector::operator unsigned int()
{
    return v.size();
}

void MyVector::process()
{
    for (auto w : v)
        w->Run(&d[0], d.size());
}

void MyVector::clear()
{
    d.clear();
}
