#pragma once
#include <bits/stdc++.h>
using namespace std;

class Node {
protected:
	//int value;
public:
	int value;
	//Node(int v) : value(v) {}
	virtual Node* getNode(int index) = 0;
	virtual int getNodeCount() = 0;
};

