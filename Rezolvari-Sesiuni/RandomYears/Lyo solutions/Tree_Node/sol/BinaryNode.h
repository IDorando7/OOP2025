#pragma once
#include "Node.h"

class BinaryNode : public Node {
private:
	Node* children[2];
public:
	BinaryNode(int val, Node* left, Node* right);
	Node* getNode(int index);
	int getNodeCount();
};

