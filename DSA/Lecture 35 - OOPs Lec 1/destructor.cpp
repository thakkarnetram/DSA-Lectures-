#include <iostream>
using namespace std;

class Person
{
public:
    int age;
    char level;

    // getter
    int getAge()
    {
        return age;
    }
    char getLevel()
    {
        return level;
    }
    // setter
    void setAge(int x)
    {
        age = x;
    }
    void setLevel(char x)
    {
        level = x;
    }
    // constructors
    Person()
    {
        cout << "default Constructor" << endl;
    }
    // destructor
    ~Person()
    {
        cout << "Destructor called" << endl;
    }
}; 

int main()
{
    Person a;                 // static
    Person *b = new Person(); // dynamic
    delete b; 
    return 0;
}