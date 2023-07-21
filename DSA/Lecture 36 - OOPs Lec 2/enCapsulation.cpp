#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int grade;
    char section;

public:
    string getName()
    {
        return this->name;
    }
    int getGrade()
    {
        return this->grade;
    }
    char getSection()
    {
        return this->section;
    }
    /*
    This is encapsulation and thus making the class Ready Only
    */
};

int main()
{
    Person okie;
    return 0;
}