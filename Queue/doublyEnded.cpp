#include <iostream>
#include <queue>

using namespace std;

class Deque
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    Deque(int n)
    {
        size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    bool pushFront(int x)
    {
        // check full or not
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {

            return false;
        }
        else if (front == -1)
        {
            front = rear = 0;
        }
        else if (front == 0 && rear != size - 1)
        {
            front = size - 1;
        }
        else
        {
            front--;
        }
        arr[front] = x;
        return true;
    }

    bool pushRear(int x)
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            return false;
        }
        else if (front == -1)
        {
            front = rear = 0;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = x;
        return true;
    }

    int popFront()
    {
        if (front == -1)
        {
            return -1;
        }
        int ans = arr[rear];
        arr[front] = -1;
        if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
        return ans;
    }
    int popRear()
    {
        if (front == -1)
        {
            return -1;
        }
        int ans = arr[rear];
        arr[rear] = -1;
        if (front == rear)
        {
            front = rear = -1;
        }
        else if (rear == 0)
        {
            rear = size - 1;
        }
        else
        {
            rear--;
        }
        return ans;
    }

    int getFront()
    {
        if (isEmpty())
        {
            return -1;
        }
        return arr[front];
    }

    bool isEmpty()
    {
        if (front == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    // deque<int> d;

    // d.push_front(12);
    // d.push_back(14);

    // cout << d.front() << endl;
    // cout << d.back() << endl;

    // d.pop_front();

    // cout << d.front() << endl;
    // cout << d.back() << endl;
    // d.pop_back();

    // if (d.empty())
    // {
    //     cout << "queue is empty" << endl;
    // }
    // else
    // {
    //     cout << "queue is not empty" << endl;
    // }

    return 0;
}