#include <chrono>
#include "TreeContainer.h"
#include "Node.h"
using namespace std;

TreeContainer::TreeContainer() {
	head = nullptr;
}

void TreeContainer::add(shared_ptr<Node> node) {

	// Creates Head
	if (head == nullptr) {
		head = node;
		return;
	}

	// Inserts node.
	head->insert(node);


	// If the head is unbalanced change it here.
	// Very similar to the shift functions

	int bal = head->balance();
	shared_ptr<Node> transferNode = head;
	shared_ptr<Node> gChild = nullptr;

	// Shift Left
	if (bal > 1) {
		shared_ptr<Node> child = transferNode->left;

		if (child->right != nullptr) {
			gChild = child->right;
		}
		head = child;
		transferNode->left = gChild;
		child->right = transferNode;
	}
	// Shift Right
	else if (bal < -1) {
		shared_ptr<Node> child = transferNode->right;

		if (child->left != nullptr) {
			gChild = child->left;
		}
		head = child;
		transferNode->right = gChild;
		child->left = transferNode;
	}
}

void TreeContainer::search(int& num) {
	auto start = chrono::high_resolution_clock::now();



	auto end = chrono::high_resolution_clock::now();

	auto duration = chrono::duration_cast<chrono::duration<double>>(end - start);
}
