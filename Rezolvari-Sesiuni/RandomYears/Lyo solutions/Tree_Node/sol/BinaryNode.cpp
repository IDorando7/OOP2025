#include "BinaryNode.h"

BinaryNode::BinaryNode(int val, Node* left, Node* right) {
	value = val;
	children[0] = left;
	children[1] = right;
}

Node* BinaryNode::getNode(int index) {
	if (index > 1) return nullptr;
	return index == 0 ? children[0] : children[1];
}

int BinaryNode::getNodeCount() {
	return 2;
}