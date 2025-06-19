#pragma once
#include "Author.h"
#include "Product.h"

class Book : public Product {
private:
	int nrPages;
	int price;
	vector<Author*> autors;
public:
	Book();
	Book(int p, int page);
	void Accept(Visitor* a);
	int GetNrPages();
	int GetPrice();
	void AddAuthor(Author* a);
	vector<Author*> GetAutors();
};

