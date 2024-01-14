#include "TreeContainer.h"
#include "Node.h"
using namespace std;

TreeContainer::TreeContainer() {
	head = nullptr;
}

void TreeContainer::add(shared_ptr<Node> node) {

	if (head = nullptr) {
		head = make_shared<Node>(node);
		return;
	}

	head->insert(node);

	int bal = head->balance();
	std::shared_ptr<Node> transferNode = head;
	std::shared_ptr<Node> gChild = nullptr;

	if (bal > 1) {
		std::shared_ptr<Node> child = transferNode->left;

		if (child->right != nullptr) {
			gChild = child->right;
		}
		head = child;
		transferNode->left = gChild;
		child->right = transferNode;
	}
	else if (bal < -1) {
		std::shared_ptr<Node> child = transferNode->right;

		if (child->left != nullptr) {
			gChild = child->left;
		}
		head = child;
		transferNode->right = gChild;
		child->left = transferNode;
	}
}
