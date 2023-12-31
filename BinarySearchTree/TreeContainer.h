#pragma once
#include <memory>
#include <vector>
#include "Node.h"

class TreeContainer
{
public:
	// Default Const.
	TreeContainer();

	// Gets the pointer for the head node
	std::shared_ptr<Node> getHead();

	// Adds a node to the stack.
	void add(Node node);

	// The head of the list.
	std::shared_ptr<Node> head;

private:
	// Sets the node to the head.
	void makeHead(Node head);

	//Gets the height to an int.
	int getHeight(std::shared_ptr<Node> root);

};

