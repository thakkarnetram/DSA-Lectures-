#include <iostream>
using namespace std;

class Person
{
    int x;
    int y;

public:
    Person(int i, int j) : x(i), y(j)
    {
        cout << "Initialization List called" << endl;
        cout << "value of x " << x << endl;
        cout << "value of y " << y << endl;
    }
};

int main()
{
    Person a(5, 3);
    return 0;
}