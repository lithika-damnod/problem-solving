#include <iostream>
#include "binaryTree.h"

using namespace std;

int main()
{
    cout << "Binary Tree" << endl;
    binaryTree *root = new binaryTree(1);
    root->left = new binaryTree(2);
    root->right = new binaryTree(3);
    root->left->left = new binaryTree(4);
    root->print();
    return 0;
}
