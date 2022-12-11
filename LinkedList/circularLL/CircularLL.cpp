#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{
    // empty
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non-empty list

        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found ->curr
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
    // assume that the element is present in the list
}

void print(Node *tail)
{
    Node *temp = tail;
    while (tail->next != temp)
    {
        cout << tail->data << " ";
        tail = tail->next;
    }
    cout << " ";
}

int main()
{
    Node *tail = NULL;

    // empty//
    insertNode(tail, 5, 3);
    print(tail);
    return 0;
}

// reveser linked list
Node *reverseLinkedList(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    return prev;
}