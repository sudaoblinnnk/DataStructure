#include "BST.h"

#include <iostream>
using namespace std;

#define COUNT(a) sizeof(a) / sizeof(a[0])
int main()
{
    cout << "main" << endl;
    int data[] = {15,6,18,3,7,17,20,2,4,13,9};
    //int data[] = {17, 12, 10, 15, 13, 16, 19};
    BSTree *pTree = BSTree::create(data[0]);
    //cout << "main pTree addr: " << pTree << endl;
    for (int i = 1; i < COUNT(data); i++)
        pTree->insertNodeRecursive(data[i], &pTree);

    pTree->printTree(pTree);
    pTree->reverse(pTree);
    cout << endl;
    pTree->printTree(pTree);
    cout << endl;
    return 0;
}