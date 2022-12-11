#include <iostream>
using namespace std;

int main()
{
    // int num = 5;

    // cout << num << endl;

    // address of operator -&
    // cout << "address of num is" << &num << endl;
    // int *ptr = &num;
    // cout << "value is : " << *ptr << endl;
    // cout << "value is : " << ptr << endl;

    // double d = 4.3;
    // double *p2 = &d;

    // cout << "Address is : " << p2 << endl;
    // cout << "value is : " << *p2 << endl;
    // int i = 5;
    // int *q = &i;

    // int num = 5;
    // int a = num;
    // a++;
    int num = 5;
    int *p = &num;
    (*p)++;
    int *q = p;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;

    // import concept
    int i = 3;
    int *t = &i;
    cout << (*t)++ << endl;

    return 0;
}