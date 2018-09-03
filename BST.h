#ifndef __BST_H__
#define __BST_H__


#include <iostream>
using namespace std;

class BSTree
{
    private:
        BSTree * left;
        BSTree * right;
        int data;

    public:
        static BSTree * create(int data);
        void insertNodeRecursive(int d, BSTree **pTree);
        void insertNode(int data, BSTree **tree);
        bool deleteNode(int data);
        void reverseRecursive(BSTree * pTree);
        void reverse(BSTree * pTree);
        void printTree(BSTree * pTree);

        BSTree(int data);
        BSTree(const BSTree & other);
        virtual ~BSTree();
        BSTree & operator = (const BSTree & other);
    private:

};

#endif