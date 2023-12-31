#include "TreeContainer.h"
#include "Node.h"
using namespace std;

TreeContainer::TreeContainer() {
	head = nullptr;
}

void TreeContainer::makeHead(Node head) {

	TreeContainer::head = make_shared<Node>(head);
}

shared_ptr<Node> TreeContainer::getHead() {
	return head;
}

int TreeContainer::getHeight(std::shared_ptr<Node> root) {
	
}

void TreeContainer::add(Node node) {

	if (head = nullptr) {
		head = make_shared<Node>(node);
	}

	int balance = getHeight(head);

}
