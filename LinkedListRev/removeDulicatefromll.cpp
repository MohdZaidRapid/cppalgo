#include <iostream>

using namespace std;
// detect linkedlist and remove duplicate

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

// Node *uniqueSortedList(Node *head)
// {
//     if (head == NULL)
//     {
//         return NULL;
//     }

//     // non empty list

//     Node *curr = head;

//     while (curr != NULL)
//     {
//         if (((curr->next != NULL) && curr->data == curr->next->data))
//         {
//             Node *next_next = curr->next->next;
//             Node *nodeToDelete = curr->next;
//             delete (nodeToDelete);
//             curr->next = next_next;
//         }
//         else
//         {
//             curr = curr->next;
//         }
//     }

//     return head;
// }

// Sort 0 1 2 in LL

// Node *sortList(Node *head)
// {
//     int zeroCount = 0;
//     int oneCount = 0;
//     int twoCount = 0;
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         if (temp->data == 0)
//         {
//             zeroCount++;
//         }
//         else if (temp->data == 1)
//         {
//             oneCount++;
//         }
//         else if (temp->data == 2)
//         {
//             twoCount++;
//         }
//         temp = temp->next;
//     }
//     temp = head;
//     while (temp != NULL)
//     {
//         if (zeroCount != 0)
//         {
//             temp->data = 0;
//             zeroCount--;
//         }
//         else if (oneCount != 0)
//         {
//             temp->data = 1;
//             oneCount--;
//         }
//         else if (twoCount != 0)
//         {
//             temp->data = 2;
//             twoCount--;
//         }
//         temp = temp->next;
//     }
//     return head;
// }

void insertAtTail(Node *&tail, Node *curr)
{
    tail->next = curr;
    tail = curr;
}

Node *sortList(Node *head)
{
    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;
    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;
    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;

    Node *curr = head;

    // create seperate list 0s ,1s ,2s
    while (curr != NULL)
    {
        int value = curr->data;

        if (value == 0)
        {
            insertAtTail(zeroTail, curr);
        }
        else if (value == 1)
        {
            insertAtTail(oneTail, curr);
        }
        else if (value == 2)
        {
            insertAtTail(twoTail, curr);
        }

        curr = curr->next;
    }

    // merge 3 list
    // 1 is not  empty
    if (head->next != NULL)
    {
        zeroTail->next = oneHead->next;
    }
    else
    {
        // 1st list empty
        zeroTail->next = twoHead->next;
    }

    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    // setup head
    head = zeroHead->next;

    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}

int main()
{
}
