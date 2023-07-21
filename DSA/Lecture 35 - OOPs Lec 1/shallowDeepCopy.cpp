#include <iostream>
#include <cstring>
using namespace std;

class Person
{
public:
    int x;
    char a;
    char *b;

    // constructors
    Person()
    {
        cout << "I am a constructor initialized" << endl;
        b = new char[100];
    }

    // parameterized constructor
    Person(int x, char a)
    {
        this->x = x;
        this->a = a;
    }

    // copy constructor
    Person(Person &temp)
    {
        char *ch = new char[strlen(temp.b) + 1];
        strcpy(ch, temp.b);
        this->b = ch;
        cout << "Copy constructor Called " << endl;
        this->x = temp.x;
        this->a = temp.a;
    }

    // getter setters
    int getX()
    {
        return x;
    }
    char getA()
    {
        return a;
    }

    void setX(int i)
    {
        x = i;
    }
    void setA(char x)
    {
        a = x;
    }
    void setB(char b[])
    {
        strcpy(this->b, b);
    }

    // printing
    void print()
    {
        cout << endl;
        cout << "Char B " << this->b << " ,";
        cout << "Char A " << this->a << " ,";
        cout << " Int X " << this->x << endl;
    }
};

int main()
{
    Person okay;
    okay.setX(445);
    okay.setA('A');
    char b[4] = "ANC";
    okay.setB(b);
    okay.print();
    Person ok = okay;
    ok.print();
    return 0;
}