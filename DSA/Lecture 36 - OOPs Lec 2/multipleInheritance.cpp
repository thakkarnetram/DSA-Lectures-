#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void person()
    {
        cout << "Im a person" << endl;
    }
};

class Monster
{
public:
    int health;

    void monster()
    {
        cout << "Im a monster" << endl;
    }
};

class Both : public Person, public Monster
{
};

int main()
{
    Both both;
    both.monster();
    both.person();
    return 0;
}