#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                cout << endl;
                if (!q.empty())
                {
                    q.push(NULL);
                }
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

Node *insertToBst(Node *&root, int d)
{
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }
    if (d > root->data)
    {
        // right part me insert karna hai
        root->right = insertToBst(root->right, d);
    }
    else
    {
        // left part me insert karna h
        root->left = insertToBst(root->left, d);
    }
    return root;
}

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    inorder(root->left);
    inorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    inorder(root->right);
    cout << root->data << " ";
}

Node *minValue(Node *root)
{
    Node *temp = root;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node *maxValue(Node *root)
{
    Node *temp = root;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertToBst(root, data);
        cin >> data;
    }
}

Node *deleteFromBSt(Node *root, int val)
{
    // base case
    if (root == NULL)
    {
        return root;
    }
    if (root->data == val)
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // 1 child
        // left child
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;

            delete root;
            return temp;
        }

        // right child

        if (root->right != NULL && root->left == NULL)
        {
            Node *temp = root->right;

            delete root;
            return temp;
        }

        // 2 child
        if (root->left != NULL && root->right != NULL)
        {
            int mini = minValue(root->right)->data;
            root->data = mini;
            root->right = deleteFromBSt(root->right, mini);
            return root;
        }
    }
    else if (root->data > val)
    {
        root->left = deleteFromBSt(root->left, val);
        return root;
    }
    else
    {
        root->right = deleteFromBSt(root->right, val);
        return root;
    }
}

int main()
{
    Node *root = NULL;

    cout << "Enter data to create BST" << endl;

    takeInput(root);
    cout << "Printing the bst" << endl;

    cout << "Printing the bst" << endl;
    levelOrderTraversal(root);

    cout << "Printing inorder" << endl;
    inorder(root);
    cout << endl
         << "Printing postorder" << endl;
    postorder(root);
    cout << endl
         << "Printing preorder" << endl;
    preorder(root);

    cout << "Min value is " << minValue(root)->data << endl;
    cout << "Max value is " << maxValue(root)->data << endl;

    root = deleteFromBSt(root, 30);

    cout << "Printing the bst" << endl;
    levelOrderTraversal(root);

    cout << "Printing inorder" << endl;
    inorder(root);
    cout << endl
         << "Printing postorder" << endl;
    postorder(root);
    cout << endl
         << "Printing preorder" << endl;
    preorder(root);

    cout << "Min value is " << minValue(root)->data << endl;
    cout << "Max value is " << maxValue(root)->data << endl;

    return 0;
}