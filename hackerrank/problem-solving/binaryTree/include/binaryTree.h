#ifndef BINARYTREE_H
#define BINARYTREE_H

template <class T>
class binaryTree
{
    public:
        binaryTree();
        binaryTree(T val);
        binaryTree *left = nullptr;
        binaryTree *right = nullptr;
        void print();
    protected:

    private:
        T data = 0;
};

#endif // BINARYTREE_H
