#include <iostream>
using namespace std;

class A
{
public:
    void printMe()
    {
        cout << "Class A " << endl;
    }
};

class B
{
public:
    void printMe()
    {
        cout << "Class B " << endl;
    }
};

class C : public A, public B
{
};

int main()
{
    C object1;
    // object1.printMe(); "C::printMe" is ambiguous
    object1.A::printMe(); // scope res operator :: 
    object1.B::printMe();// scope res operator :: 
    return 0;
}