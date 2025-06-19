#pragma once
#include "Node.h"
#include "BinaryNode.h"
#include "LeafNode.h"

class BinaryTree {
private:
	Node* root;
	void InOrder(Node* ro);
public:
	void setRoot(Node* r);
	void walk();
};

