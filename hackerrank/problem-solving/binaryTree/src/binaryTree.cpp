#include "binaryTree.h"
#include <iostream>
using namespace std;

binaryTree::binaryTree(int val){
    data = val;
}
void binaryTree::print(){
    cout << "LEFT: " << left->data << endl;
    cout << "RIGHT: " << right->data << endl;
}

