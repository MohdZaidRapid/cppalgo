#include <iostream>
using namespace std;

struct student
{
    int roll;
    string name;
    int age;

    void studentDetails()
    {
        cout << "name is :" << name << endl;
        cout << "age is :" << age << endl;
        cout << "roll is :" << roll << endl;
    }
};
int main()
{
    student prince;
    prince.age = 21;
    prince.name = "price";
    prince.roll = 44;
    struct student zaid = {21, "Zaid", 20};
    prince.studentDetails();
    zaid.studentDetails();
    cout << endl;
    return 0;
}