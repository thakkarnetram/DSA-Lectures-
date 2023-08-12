#include <iostream>
using namespace std;

class A
{
public:
    void parentA()
    {
        cout << "Im the parent A " << endl;
    }
};

class B : public A
{
public:
    void parentB()
    {
        cout << "Im the parent B " << endl;
    }
};

class C : public A
{
public:
    void parentC()
    {
        cout << "Im the parent C" << endl;
    }
};

int main()
{
    A object1;
    object1.parentA();

    B object2;
    object2.parentA();
    object2.parentB();

    C object3;
    object3.parentA();
    object3.parentC();

    return 0;
}