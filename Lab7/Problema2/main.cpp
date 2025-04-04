#include <bits/stdc++.h>
#include "Tree.cpp"

using namespace std;

bool compareInt(const int& a, const int& b)
{
	return a > b;
}

bool compareIntEqual(const int& a, const int& b)
{
	return a == b;
}

int main()
{
	Tree<int>copac;
	copac.add_node(5, nullptr);
	copac.add_node(6, copac.get_node(nullptr));
	copac.add_node(7, copac.get_node(nullptr));
	copac.add_node(8, copac.get_node(nullptr)->firstChild);
	copac.delete_node(copac.get_node(nullptr)->firstChild);
	copac.insert(copac.get_node(nullptr), 2, 2);
	copac.insert(copac.get_node(nullptr), 1, 10);
	copac.sort(copac.get_node(nullptr), compareInt);
	copac.add_node(12, copac.get_node(nullptr)->firstChild);
	copac.add_node(12, copac.get_node(nullptr)->firstChild->nextSibling);
	copac.add_node(20, copac.get_node(nullptr)->firstChild->firstChild);
	cout << copac.count(copac.get_node(nullptr)) << "\n";
	TreeNode<int>* found = copac.find(copac.get_node(nullptr), compareIntEqual, 12);
	cout << found->firstChild->value << "\n";
	copac.print(copac.get_node(nullptr));
	
	
	return 0;
}
