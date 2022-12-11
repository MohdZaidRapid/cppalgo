#include <iostream>
using namespace std;

// void printList(Node *head)
// {
//     if (head == NULL)
//     {
//         return;
//     }
// }

struct node
{
    int data;
    node *next;
    node *prev;
};

void push(node **head_ref, int new_data)
{
    node *new_node = new node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    new_node->prev = NULL;

    if ((*head_ref) != NULL)
    {
        (*head_ref)->prev = new_node;
    }
    (*head_ref) = new_node;
}

int main()
{

    return 0;
}