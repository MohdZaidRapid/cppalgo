#include <iostream>
#include <stack>
using namespace std;

class Stack
{
    // properties
public:
    int *arr;
    int top;
    int size;
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack underflow" << endl;
        }
    }
    int peek()
    {
        if (top >= 0)
        {

            return arr[top];
        }
        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
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
    // stack<int> s;

    // // push operation
    // s.push(2);
    // s.push(3);
    // s.pop();
    // cout << s.top() << endl;

    // if (s.empty())
    // {
    //     cout << "stack is empty" << endl;
    // }
    // else
    // {
    //     cout << "Stack is not empty" << endl;
    // }

    // cout << "size of stack is " << s.size() << endl;

    Stack st(5);
    st.push(22);
    st.push(44);
    st.push(23);
    st.push(46);
    st.push(27);
    st.push(49);

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    if (st.isEmpty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack is not Empty mere dost" << endl;
    }

    return 0;
}