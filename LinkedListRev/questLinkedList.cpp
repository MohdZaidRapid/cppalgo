#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// // reversed a linked list
// Node *reverseLinkedList(Node *head)
// {
//     if (head == NULL | head->next == NULL)
//     {
//         return head;
//     }
//     Node *prev;
//     Node *curr = head;

//     while (curr != NULL)
//     {
//         Node *forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward;
//     }

//     return prev;
// };

// reverse recursively

Node *reverse1(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *chotaHead = reverse1(head->next);

    head->next->next = head;
    head->next = NULL;
    return chotaHead;
}

void reverse(Node *&head, Node *curr, Node *prev)
{
    // base case
    if (curr == NULL)
    {
        head = prev;
        return;
    }
    Node *forward = curr->next;
    reverse(head, forward, curr);
    curr->next = prev;
}

Node *recursiveReverseLinkedList(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    reverse(head, curr, prev);
    return head;
}

int main()
{

    return 0;
}