#include <iostream>
using namespace std;

class Heap
{
    int capacity;
    int size;
    int *arr;

public:
    Heap(int c)
    {
        arr = new int[c];
        size = 0;
        capacity = c;
    }

    int left(int i)
    {
        return 2 * i + 1;
    }

    int right(int i)
    {
        return 2 * i + 2;
    }

    int parent(int i)
    {
        return (i - 1) / 2;
    }

    void insertAtHeap(int element)
    {
        if (size == capacity)
        {
            return;
        }

        size++;
        arr[size - 1] = element;
        int i = size - 1;
        while (i != 0 && arr[parent(i)] > arr[i])
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }

    void minHeapify(int i)
    {
        int li = left(i);
        int ri = right(i);
        int smallest = i;
        if (li < size && arr[li] < arr[smallest])
        {
            smallest = li;
        }
        if (ri < size && arr[i] < arr[smallest])
        {
            smallest = ri;
        }
        if (smallest != i)
        {
            swap(arr[i], arr[smallest]);
            minHeapify(smallest);
        }
    }

    void printArray()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << endl;
        }
    }

    int extractMin()
    {
        if (size == 0)
        {
            return INT_MAX;
        }
        if (size == 1)
        {
            size--;
            return arr[0];
        }
        arr[size - 1] = arr[0];
        size--;
        minHeapify(0);
        cout<<arr[size];
        return arr[size];
    }
};

// complexity(logn) 

int main()
{
    Heap *h = new Heap(10);

    h->insertAtHeap(30);
    h->insertAtHeap(40);
    h->insertAtHeap(50);
    h->insertAtHeap(60);
    h->insertAtHeap(70);

    h->printArray();
    h->extractMin();
    // h->minHeapify();

    delete h;

    return 0;
}