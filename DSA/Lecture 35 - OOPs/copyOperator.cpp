#include <iostream>
using namespace std;

class Person
{
public:
    int x;
    int y;

    Person()
    {
        cout << "Default " << endl;
    }

    // copy constructor
    Person(Person &temp)
    {
        this->x = temp.x;
        this->y = temp.y;
    }

    // Parameterized cons
    Person(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    // getter
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    // setter
    void setX(int a)
    {
        x = a;
    }
    void setY(int b)
    {
        y = b;
    }

    // print
    void Print()
    {
        cout << "X => " << this->x << " ,";
        cout << "Y => " << this->y << endl;
    }
};

int main()
{
    Person a;
    Person b;
    a.setX(77);
    a.setY(55);
    b = a; // copy assignment operator used
    a.Print();
    b.Print();
    return 0;
}