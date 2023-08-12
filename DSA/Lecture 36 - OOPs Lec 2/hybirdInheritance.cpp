#include <iostream>
using namespace std;

class A
{
public:
    void printA()
    {
        cout << "PRINT A " << endl;
    }
};

class B : public A
{
public:
    void printB()
    {
        cout << "PRINT B " << endl;
    }
};

class C : public A, public B
{
public:
    void printC()
    {
        cout << "PRINT C " << endl;
    }
};

int main()
{
    A printA;
    B printB;
    C printC;

    cout << "PRINT MAIN A CLASS" << endl;
    printA.printA();

    cout << "PRINT CLASS B AND CLASS A" << endl;
    printB.printA();
    printB.printB();

    cout << "PRINT CLASS C AND - CLASS A AND CLASS B " << endl;
    printC.printB();
    printC.printC();
    return 0;
}