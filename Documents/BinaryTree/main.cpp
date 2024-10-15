#include <iostream>

#include "BinaryTree.h"
using namespace std;

int main() {
    BinaryTree tree;


    tree.root = tree.insert(tree.root, 50);
    tree.root = tree.insert(tree.root, 20);
    tree.root = tree.insert(tree.root, 70);

    int valueToSearch = 20;
    Node* result = tree.search(tree.root, valueToSearch);
    cout << result -> data;

    return 0;
}
