#include <iostream>
#include "binaryTree.h"

using namespace std;

int main()
{
    cout << "Binary Tree - Nodes" << endl;
    binaryTree *root = new binaryTree("lithika");
    root->left = new binaryTree("damnod");
    root->right = new binaryTree("bandara");
    root->left->left = new binaryTree("dasanayaka");
    root->print();
    return 0;
}
