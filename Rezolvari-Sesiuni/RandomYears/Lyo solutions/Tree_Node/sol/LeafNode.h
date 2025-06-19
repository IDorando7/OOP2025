#pragma once
#include "Node.h"

class LeafNode : public Node {
public:
	LeafNode(int v);
	Node* getNode(int index);
	int getNodeCount();
};

