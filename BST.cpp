#include "BST.h"

// BSTree * left;
// BSTree * right;
// int data;
BSTree* BSTree::create(int data)
{
    cout << "create " << data <<  endl;
    BSTree *pTree = new BSTree(data);
    pTree->left = NULL;
    pTree->right = NULL;
    cout << "create pTree addr: " << pTree << endl;
    return pTree;
}

void BSTree::insertNodeRecursive(int d, BSTree **pTree)
{
    cout << "insertNodeRecursive" <<  endl;
    if (*pTree == NULL)
    {
        *pTree = BSTree::create(d);
    } else if (d < (*pTree)->data) {
        insertNodeRecursive(d, &((*pTree)->left));
    } else if (d > (*pTree)->data) {
        insertNodeRecursive(d, &((*pTree)->right));
    }
}

void BSTree::insertNode(int d, BSTree **pTree)
{
    BSTree *parent = *pTree;
    BSTree * cur = parent;
    
    while(cur) {
        parent = cur;
        if (cur->data < d) {
            cur = cur->right;
        } else if (cur->data > d) {
            cur = cur->left;
        }  
    }
    if (parent->data < d){
        parent->right = BSTree::create(d);
    } else {
        parent->left = BSTree::create(d);
    }
}

bool BSTree::deleteNode(int data)
{
    cout << "delete" <<  endl;
    return true;
}

void BSTree::reverseRecursive(BSTree * pTree)
{
    //cout << "reverse" <<  endl;
    BSTree * tmp;
    if (pTree) {
        tmp = pTree->left;
        pTree->left = pTree->right;
        pTree->right = tmp;

        if (pTree->left) {
            reverseRecursive(pTree->left);
        }
        if (pTree->right) {
            reverseRecursive(pTree->right);
        }
    }
}

void BSTree::reverse(BSTree * pTree)
{
    //cout << "reverse" <<  endl;
    BSTree * tmp;
    if (pTree) {
        tmp = pTree->left;
        pTree->left = pTree->right;
        pTree->right = tmp;

        if (pTree->left) {
            reverse(pTree->left);
        }
        if (pTree->right) {
            reverse(pTree->right);
        }
    }
}

void BSTree::printTree(BSTree * pTree)
{
    if (pTree) {
        cout << " " << pTree->data;
        printTree(pTree->left);
        printTree(pTree->right);
    }
}

BSTree::BSTree(int d):
    data(d)
{
    cout << "BSTree()" <<  endl;
}

BSTree::BSTree(const BSTree & other)
{
    cout << "BSTree(const BSTree & other)" <<  endl;
}
        
BSTree::~BSTree()
{
    cout << "~BSTree" <<  endl;
}

BSTree & BSTree::operator = (const BSTree & other)
{
    cout << "operator = " <<  endl;
}
