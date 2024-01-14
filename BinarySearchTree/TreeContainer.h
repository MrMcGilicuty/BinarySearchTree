#pragma once
#include <memory>
#include <vector>
#include "Node.h"

class TreeContainer
{
public:
	// Default Const.
	TreeContainer();

	// Adds a node to the stack.
	void add(std::shared_ptr<Node> node);

	// The head of the list.
	std::shared_ptr<Node> head;


};