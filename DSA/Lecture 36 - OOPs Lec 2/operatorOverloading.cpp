#include <iostream>
using namespace std;

class A
{
public:
    int a;
    int b;

    void operator+(A &obj)
    {
        int val1 = this->a;
        int val2 = obj.a;
        cout << val1 - val2 << endl;
    }
    void operator()()
    {
        cout << "bracket overloading " << endl;
    }
};

int main()
{
    A object1, object2;
    object1.a = 40;
    object2.a = 20;
    object1 + object2;
    object1();
    return 0;
}