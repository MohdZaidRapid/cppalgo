#include <iostream>
#include <cstring>
using namespace std;

class Hero
{
    // properties

private:
    int health;

public:
    char *name;
    char level;
    static int timeToComplete;

    Hero()
    {
        cout << "Constructor Called" << endl;
        name = new char[100];
    }

    Hero(int heatlh)
    {
        this->health = health;
    }

    // Parameterised Constructor
    Hero(int health, char level)
    {
        cout << "this -->" << this << endl;
        this->health = health;
        this->level = level;
        //(*ramesh).health
    }

    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << "Name" << this->name << endl;
        cout << "health " << this->health << endl;
        cout << "level " << this->level << endl;
        cout << endl
             << endl;
        ;
    }

    int getHealth()
    {
        return health;
    }

    int getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {

        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    // static int random()
    // {
    //     cout << this->health << endl;
    // }
    // only access static member
    ~Hero()
    {
        cout << "Desctructor bhai called" << endl;
    }
};

int Hero::timeToComplete = 5;

// this save address of  instace of Hero

int main()
{
    //
    // Hero zaid(10);
    // cout << "Address of ramesh " << &zaid << endl;
    // zaid.getHealth();

    // //
    // Hero *h = new Hero();

    // creation of Object
    // Hero ramesh;
    // cout << "Ramesh health is" << ramesh.getHealth() << endl;
    // ramesh.setHealth(70);
    // ramesh.level = 'A';
    // // by default accees modifier [private]
    // cout << "health is: " << ramesh.getHealth() << endl;
    // cout << "level is: " << ramesh.level << endl;

    // // cout << "size : " << sizeof(h1)
    // //      << endl;
    /*
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout << "Level is " << a.level << endl;
    cout << "health is " << a.getHealth() << endl;

    Hero *b = new Hero;
    // cout << "Level is " << (*b).level << endl;
    // cout << "health is " << (*b).getHealth() << endl;
    b->setLevel('A');
    b->setHealth(70);
    cout << "level is " << b->level << endl;
    cout << "health is " << b->getHealth() << endl;
*/
    // Hero *h = new Hero(11);
    // Hero temp(22,"B");
    // Hero zaid(10);
    // zaid.print();
    // Hero zaid(10);
    // cout << "Address of ramesh " << &zaid << endl;
    // Hero *h = new Hero(11);
    // h->print();

    // Hero temp(22, 'B');
    // temp.print();

    // Hero S(70, 'C');
    // S.print();

    // Hero R(S);
    // R.print();
    // Hero hero1;
    // hero1.setHealth(12);
    // hero1.setLevel('D');
    // char name[7] = "Babbar";
    // hero1.setName(name);
    // hero1.print();

    // Hero hero2(hero1);
    // // Hero hero2 = hero1;
    // cout << hero2.name << endl;
    // hero2.print();
    // hero1.name;
    // hero1.name[0] = 'G';
    // hero1.print();
    // hero2.print();

    // static
    // Hero a;

    // // dynamic
    // Hero *b = new Hero();

    // delete b;

    // cout << Hero::timeToComplete << endl;

    // Hero a;

    // cout << a.timeToComplete << endl;
    // Hero b;
    // b.timeToComplete = 10;
    // cout << a.timeToComplete << endl;
    // cout << b.timeToComplete << endl;
    // cout << Hero::random() << endl;

    return 0;
}