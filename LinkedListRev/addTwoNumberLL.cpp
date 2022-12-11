#include <iostream>
#include <vector>

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

Node *reverse(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void insertAtTail(struct Node *&head, struct Node *&tail, int val)
{
    Node *temp = new Node(val);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

struct Node *add(struct Node *first, struct Node *second)
{
    int carry = 0;

    Node *ansHead = NULL;
    Node *ansTail = NULL;
    while (first != NULL && second != NULL)
    {
        int sum = carry + first->data + second->data;
        int digit = sum % 10;
        // Node *temp = new Node(digit);
        // create node and add in answerlinked list
        insertAtTail(ansHead, ansTail, digit);

        carry = sum / 10;
    }
    while (first != NULL)
    {
        int sum = carry + first->data;
        int digit = sum % 10;
        insertAtTail(ansHead, ansTail, digit);
        carry = sum / 10;

        first = first->next;
        second = second->next;
    }
    while (second != NULL)
    {
        int sum = carry + second->data;
        int digit = sum % 10;
        insertAtTail(ansHead, ansTail, digit);
        carry = sum / 10;
        first = first->next;
    }
    while (carry != 0)
    {
        int sum = carry;
        int digit = sum % 10;
        insertAtTail(ansHead, ansTail, digit);
        carry = sum / 10;
        second = second->next;
    }
    return ansHead;
}

struct Node *addTwoLists(struct Node *first, struct Node *second)
{
    first = reverse(first);
    second = reverse(second);

    // step 2 add-to ll

    Node *ans = add(first, second);

    ans = reverse(ans);
    return ans;
}

int main()
{
    return 0;
}