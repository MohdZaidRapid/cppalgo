#include <iostream>
#include <stack>
#include <vector>

using namespace std;

class NStack
{
    int *arr;
    int *top;
    int *next;

    int n, s;

    int freespot;

public:
    NStack(int N, int S)
    {
        n = N;
        s = S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];

        // top init
        for (int i = 0; i < n; i++)
        {
            top[i] = -1;
        }

        // next init
        for (int i = 0; i < s; i++)
        {
            next[i] = i + 1;
        }
        // update last index to -1
        next[s - 1] = -1;

        // init freespot
        freespot = 0;

        // check for overflow
    }

    bool push(int x, int m)
    {
        if (freespot == -1)
        {
            return false;
        }

        // find index
        int index = freespot;

        // update freespot

        freespot = next[index];

        // insert  element into array
        arr[index] = x;

        // update next
        next[index] = top[m - 1];

        // update top
        top[m - 1] = index;

        return true;
    }

    int pop(int m)
    {
        // check underflow condition
        if (top[m - 1] == -1)
        {
            return -1;
        }

        int index = top[m - 1];

        top[m - 1] = next[index];

        next[index] = freespot;

        freespot = index;

        return arr[index];
    }
};

int main()
{

    return 0;
}