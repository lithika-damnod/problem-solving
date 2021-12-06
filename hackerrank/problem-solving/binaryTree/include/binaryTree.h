#ifndef BINARYTREE_H
#define BINARYTREE_H


class binaryTree
{
    public:
        binaryTree(int val);
        binaryTree *left = nullptr;
        binaryTree *right = nullptr;
        void print();
    protected:

    private:
        int data = 0;
};

#endif // BINARYTREE_H
