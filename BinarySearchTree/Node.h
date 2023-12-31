#pragma once
#include <memory>
class Node {
public:
	Node();
	// You must have a node with a number.
	Node(int number);

	// Number it holds.
	int key;
	// Node to the down-left.
	std::shared_ptr<Node> left;
	// Node to the down-right.
	std::shared_ptr<Node> right;
	// (Relative)
	int height;
};

