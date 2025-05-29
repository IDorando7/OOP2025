#include "Book.h"

Book::Book(int _price, int _quantity, string _title, string _author)
{
    title = _title;
    author = _author;
    price = _price;
    quantity = _quantity;
}

string Book::GetType()
{
    return "Book";
}

int Book::GetQuantity()
{
    return quantity;
}

int Book::GetPrice()
{
    return price;
}

void Book::Print()
{
    printf("%s (Title=%s, Author=%s) Price=%d Quantity=%d\n", GetType().c_str(), title.c_str(), author.c_str(), price, quantity);
}
