#pragma once
#include <iostream>
using namespace std;

template <class T>
class TreeNode 
{
public:
    T value;
    TreeNode<T>* firstChild;
    TreeNode<T>* nextSibling;
    TreeNode<T>* lastSibling;
    TreeNode<T>* firstChildParent;

    TreeNode(T val) : value(val), firstChild(nullptr), nextSibling(nullptr), lastSibling(nullptr), firstChildParent(nullptr){}
};

template <class T>
class Tree
{
    TreeNode<T>* root;
public:
    Tree() : root(nullptr) {};
    void add_node(T value, TreeNode<T>* nod);
    TreeNode<T>* get_node(TreeNode<T>* nod);
    void delete_node(TreeNode<T>* nod);
    TreeNode<T>* find(TreeNode<T>*nod, bool (*compare)(const T&, const T&), const T& param);
    void insert(TreeNode<T>* par, int index, T val);
    void sort(TreeNode<T>* par, bool (*compare)(const T&, const T&) = nullptr);
    int count (TreeNode<T>* nod);
    void print(TreeNode<T> *nod);
};

