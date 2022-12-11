#include <iostream>
#include <cstring>
using namespace std;

class A
{
public:
    void sayHello()
    {
        cout << "Hello Mohd Zaid";
    }

    // not be overloaded
    int sayHello(string name, int n)
    {
        cout << "Hello Mohd Zaid";
        return n;
    }

    void sayHello(string name)
    {
        cout << "Hello" << name << endl;
    }
};

class B
{
public:
    int a;
    int b;

public:
    int add()
    {
        return a + b;
    }

    void operator+(B &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "output " << value2 - value1 << endl;
    }
};

int main()
{
    B obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;
}