#include <iostream>
#include <vector>

// merge two sorted linked list;
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

// bool checkPalindrome(vector<int> arr)
// {
//     int n = arr.size();
//     int s = 0;
//     int e = n - 1;
//     while (s <= e)
//     {
//         if (arr[s] != arr[e])
//         {
//             return 0;
//         }
//         s++;
//         e--;
//     }
//     return 1;
// }

// bool isPalindrome(Node *head)
// {
//     vector<int> arr;
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         arr.push_back(temp->data);
//         temp = temp->next;
//     }
//     return checkPalindrome(arr);
// }

// approach 2

Node *getMid(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

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
bool isPalindrome(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return true;
    }
    // step1 find mid
    Node *middle = getMid(head);

    Node *temp = middle->next;
    middle->next = reverse(temp);

    // step 3 compare oth half
    Node *head1 = head;
    Node *head2 = middle->next;

    while (head2 != NULL)
    {
        if (head->data != head2->data)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    // repaeat step 2
    // Node *temp = middle->next;
    // middle->next = reverse(temp);
}

int main()
{
    return 0;
}