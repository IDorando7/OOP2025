#pragma once
#include <iostream>

template <class T>
class Node
{
public: 
	T val;
	Node<T>* next;

	Node(T _val)
	{
		val = _val;
		next = nullptr;
	}
};

template <class T> 
class SingleLinkedList
{
private:
	Node<T>* start;
public:

	SingleLinkedList()
	{
		start = nullptr;
	}

	~SingleLinkedList()
	{
		while (start)
		{
			Node<T>* urm = start->next;
			delete start;
			start = urm;
		}
	}

	SingleLinkedList& operator+= (T element)
	{
		Node<T>* p = new Node<T>(element);
		Node<T>* init = start;
		if (start == nullptr)
		{
			start = p;
			return *this;
		}
		while (init->next)
			init = init->next;
		init->next = p;
		return *this;
	}

	void print(void (*func)(const T& element))
	{
		Node<T>* init = start;
		while (init)
		{
			func(init->val); 
			init = init->next;
		}
	}

	bool operator&& (T element)
	{
		Node<T>* init = start;
		while (init)
		{
			if (init->val == element)
				return 1;
			init = init->next;
		}
		return 0;
	}

	T pop_first()
	{
		Node<T>* init = start -> next;
		T x = start->val;
		delete start;
		start = init;
		return x;
	}

	operator bool()
	{
		return start != nullptr;
	}


};

