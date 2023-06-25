#include <iostream>
using namespace std;

class Animal
{
public:
    int x;
    char y;

    // default constructor
    Animal()
    {
        cout << "Animal Constructor" << endl;
    }

    // parameterized constructor
    Animal(int x, char y)
    {
        this->x = x;
        this->y = y;
    }

    // creating copy constructor
    Animal(Animal &temp)
    {
        this->x = temp.x;
        this->y = temp.y;
    }

    // getter
    int getX()
    {
        return x;
    }
    char getY()
    {
        return y;
    }
    // setter
    void setX(int x)
    {
        x = x;
    }
    void setY(char y)
    {
        y = y;
    }
};

int main()
{
    Animal horse(55, 'A');
    Animal cat(horse); // here horse's values are copied in cat's value
    cout << " Cat 's Number is " << cat.getX() << endl;
    return 0;
}