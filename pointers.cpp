#include <iostream>
using namespace std;

int main()
{
    // char y = 'c';
    // int x = 20;
    // declare pointer variable
    // int *ptr;
    // ptr = &x;
    // cout << ptr << endl;
    // cout << *ptr << endl;
    // int *ptr = &x;
    // char *pointer = &y;

    // int *ptr = &x;

    // int *num = &x;

    // int *ptr1 = &x;
    // int **ptr1;
    // // ptr1 = &ptr1;
    // // ptr1=&x;
    // cout << ptr1 << endl;
    // cout << **ptr1 << endl;=
    int a[] = {2, 3, 5, 7};
    int *ptr;
    int *ptr1;
    ptr = a; // automatic stores address of first index
    // wrong -->ptr=&a;
    ptr = &a[0];
    cout << ptr << endl;
    cout << ptr1 << endl;
    return 0;
}