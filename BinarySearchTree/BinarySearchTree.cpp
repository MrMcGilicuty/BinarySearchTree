#include <iostream>
#include <vector>
#include <memory>
#include "TreeContainer.h"
#include "Node.h"

using namespace std;

void generate100(TreeContainer* BinaryTree) {

    // Numbers between 0-100.
    for (int x = 0; x <= 100; x++) {
        Node newNode(x);

        // Creates a new node and adds it to the list.
        BinaryTree->add(make_shared<Node>(newNode));

    }
    // Deletes pointer.
    delete BinaryTree;
}

int main()
{
    TreeContainer BLNTree;
    generate100(&BLNTree);
}