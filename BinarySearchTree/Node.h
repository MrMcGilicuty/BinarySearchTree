#pragma once
#include <memory>
class Node {
public:
	// You must have a node with a number.
	Node(int num) {
		this->key = num;
	}
	//
	void insert(std::shared_ptr<Node> node);
	//
	void shiftRight(bool left);
	//
	void shiftLeft(bool left);
	//
	int balance();

	// Number it holds.
	int key;
	// Node to the down-left.
	std::shared_ptr<Node> left;
	// Node to the down-right.
	std::shared_ptr<Node> right;
	// (Relative)
	int height();
};

