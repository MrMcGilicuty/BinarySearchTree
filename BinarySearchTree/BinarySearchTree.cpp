#include <iostream>
#include <memory>
#include <chrono>
#include "TreeContainer.h"
#include "Node.h"
using namespace std;

void generateTree(shared_ptr<TreeContainer> BinaryTree, int size) {

    // Numbers between 0-100.
    for (int x = 0; x <= size; x++) {
        Node newNode(x);

        // Creates a new node and adds it to the list.
        BinaryTree->add(make_shared<Node>(newNode));

    }
}

int main()
{
    auto start = chrono::high_resolution_clock::now();

    // Setup.
    shared_ptr<TreeContainer> BLNTree = make_shared<TreeContainer>();

    generateTree(BLNTree, 10000);

    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::duration<double>>(end - start);
    cout << "Finished building tree in " << duration.count() << " Seconds.\n\n";

    // Input loop.
    while (true) {
        int searchKey;
        cout << "What number would you like to search for: ";
        cin >> searchKey;

        BLNTree->search(searchKey);
    }
}