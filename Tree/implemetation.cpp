#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

node *newNode(int data)
{
    node *element = new node();
    element->data = data;
    element->left = NULL;
    element->right = NULL;

    return element;
}

// node *newNode(int data)
// {
//     node *node = new struct node();
//     node->data = data;
//     node->left = NULL;
//     node->right = NULL;

//     return element;
// }

void printNode(node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->left;
    }
    cout << endl;
}
int main()
{
    // make root node
    node *root = newNode(1);
    /*
      1
    /   \
  NULL  NULL
    */

    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    printNode(root);
    return 0;
}