#include <iostream>
#include <vector>
#include <iostream>
#include "TreeContainer.h"
#include "Node.h"

void generate100(TreeContainer* BinaryTree) {

    // Numbers between 0-100 (101 total numbers).
    for (int x = 0; x < 101; x++) {
        Node newNode(x);

        // Creates a new node and adds it to the list.
        BinaryTree->add(newNode);
    }
    // Deletes pointer.
    delete BinaryTree;
}

int main()
{
    TreeContainer BLNTree();

    generate100(&BLNTree());
}

