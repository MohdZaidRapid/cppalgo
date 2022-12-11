#include <iostream>
#include <cstring>
using namespace std;

// class Student
// {
// private:
//     string name;
//     int age;
//     int height;

// public:
//     int getAge()
//     {
//         return this->age;
//     }
// };

// class Human
// {
// public:
//     int height;
//     int weight;
//     int age;

// private:
//     int age;

// public:
//     int getAge()
//     {
//         return this->age;
//     }
//     int setWeight(int w)
//     {
//         this->weight = w;
//     }
// };

// class Male : public Human
// {
// public:
//     string color;

//     void sleep()
//     {
//         cout << "Male Sleeping" << endl;
//     }
// };

// int main()
// {
//     // Student first;
//     // cout << "Sab sahi chal raha hai" << endl;
//     Male object1;

//     cout << object1.age;
//     cout << object1.weight;
//     cout << object1.height;
//     return 0;
// }
// Hierarchical
class A
{
public:
    void func1()
    {
        cout << "Inside Function 1" << endl;
    }
};

class B : public A
{
public:
    void func2()
    {
        cout << "Inside Function 2" << endl;
    }
};

class C : public A
{
public:
    void func3()
    {
        cout << "Inside Function 3" << endl;
    }
};

int main()
{
    A obj1;
    obj1.func1();

    B obj2;
    obj2.func1();
    obj2.func2();

    C obj3;
    obj3.func1();
    // obj3.func2();
    obj3.func3();

    return 0;
}