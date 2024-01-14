#include <memory>
#include "Node.h"

int Node::balance() {
	if (this->right == nullptr && this->left == nullptr) {
		return 0;
	}
	else if (this->left == nullptr) {
		return -this->right->height();
	}
	else if (this->right == nullptr) {
		return this->left->height();
	}
	else {
		return this->left->height() - this->right->height();
	}
}


void Node::insert(std::shared_ptr<Node> node) {
	if (this->left == nullptr && this->key > node->key) {
		this->left = node;
		
		return;
	}
	else if (this->right == nullptr && this->key <= node->key){
		this->right = node;
		return;
	}
	else if (this->key > node->key) {
		this->left->insert(node);
		
		int bal = this->left->balance();

		if (bal > 1) {
			this->shiftRight(1);
		}
		else if (bal < -1) {
			this->shiftLeft(1);
		}
	}
	else if (this->key < node->key) {
		this->right->insert(node);

		int bal = this->right->balance();

		if (bal > 1) {
			this->shiftRight(0);
		}
		else if (bal < -1) {
			this->shiftLeft(0);
		}
	}
}

void Node::shiftRight(bool left) {
	std::shared_ptr<Node> transferNode;
	std::shared_ptr<Node> child = transferNode->left;
	std::shared_ptr<Node> gChild = nullptr;

	if (left) 
		transferNode = this->left;
	else {
		transferNode = this->right;
	}

	this->left = child;
	if (child->right != nullptr) {
		gChild = child->right;
	}
	transferNode->left = gChild;
	child->right = transferNode;
}

void Node::shiftLeft(bool left) {
	std::shared_ptr<Node> transferNode;
	std::shared_ptr<Node> child = transferNode->right;
	std::shared_ptr<Node> gChild = nullptr;

	if (left)
		transferNode = this->left;
	else {
		transferNode = this->right;
	}

	this->right = child;
	if (child->left != nullptr) {
		gChild = child->left;
	}
	transferNode->right = gChild;
	child->left = transferNode;
}

int Node::height() {

	if (this->left == nullptr && this->right == nullptr) {
		return 1;
	}
	else if (this->right == nullptr) {
		return this->left->height() + 1;
	}
	else if (this->left == nullptr) {
		return this->right->height() + 1;
	}
	else {
		int depthL = this->left->height();
		int depthR = this->right->height();

		return depthL <= depthR ? depthR + 1 : depthL + 1;
	}
}