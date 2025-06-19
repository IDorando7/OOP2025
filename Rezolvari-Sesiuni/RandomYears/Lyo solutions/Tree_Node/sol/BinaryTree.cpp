#include "BinaryTree.h"

void BinaryTree::setRoot(Node* r) {
	root = r;
}

void BinaryTree::InOrder(Node* ro) {
	if (!ro) return;

	if(ro->getNodeCount() == 2) InOrder(ro->getNode(0));

	cout << ro->value << " ";

	if (ro->getNodeCount() == 2) InOrder(ro->getNode(1));
}

void BinaryTree::walk() {
	InOrder(root);
	cout << '\n';
}