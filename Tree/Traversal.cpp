#include <iostream>

using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

node *newNode(int data)
{
    node *temp = new node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

void printInOrder(node *node)
{
    if (node == NULL)
    {
        return;
    }
    /*first traverse left part of tree*/
    printInOrder(node->left);
    /* first traverse left part of tree */
    cout << node->data << " ";

    /* first traverse of part of tree*/
    printInOrder(node->right);
}

void printPreOrder(node *node)
{
    if (node == NULL)
    {
        return;
    }

    /* first traverse left part of tree */
    cout << node->data << " ";

    /*first traverse left part of tree*/
    printPreOrder(node->left);

    /* first traverse of part of tree*/
    printPreOrder(node->right);
}

void printPostOrder(node *node)
{
    if (node == NULL)
    {
        return;
    }
    

    /*first traverse left part of tree*/
    printPostOrder(node->left);

    /* first traverse of part of tree*/
    printPostOrder(node->right);

    /* first traverse left part of tree */
    cout << node->data << " ";
}

int main()
{
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    /*
    1
   /  \
   2   3
   / \
  4   5
    */
    cout << "Inorder traversal of tree" << endl;
    printInOrder(root);

    cout << "PreOrder traversal of tree" << endl;
    printPreOrder(root);

    cout << "PostOrder traversal of tree" << endl;
    printPostOrder(root);
    return 0;
}