#include <iostream>
using namespace std;

class Person
{
public:
    int x;
    char a;

    // default constructor
    Person()
    {
        cout << "Constructor Called" << endl;
    }

    // parameterized constructor
    Person(int x)
    {
        cout << "THIS ADDRESS -> " << this << endl;
        this->x = x;
    }
};

int main()
{
    cout << "Before initialization of Object Static" << endl;
    Person ok(855);
    cout << "Address of OK -> " << &ok << endl;
    cout << "After initialization of Object Static" << endl;
    cout << endl;

    // cout << "Before initialization of Object Dynamic" << endl;
    // Person *okay = new Person();
    // cout << "After initialization of Object Dynamic" << endl;
    return 0;
}