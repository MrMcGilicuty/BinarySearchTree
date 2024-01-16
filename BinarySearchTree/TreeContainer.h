#pragma once
#include <memory>
#include "Node.h"

class TreeContainer
{
public:

	// Adds a node to the tree.
	void add(std::shared_ptr<Node> node);
	// Searches for specific integer in tree.
	void search(int num);
	// Returns true if it found a specific number on the tree.
	bool find(int num, std::shared_ptr<Node> node);

	// The head of the list.
	std::shared_ptr<Node> head = nullptr;
};