#include <iostream>
using namespace std;

class Human
{
public:
    int height;
    int age;
    int weight;

    int getHeight()
    {
        return this->height;
    }
    void setWeight(int x)
    {
        this->weight = x;
    }
};

class Male : public Human
{
public:
    string name;

    void isMale()
    {
        cout << "im male bro " << endl;
    }
};

int main()
{
    Male john;
    john.age = 9;
    john.weight = 23;
    john.height = 4;
    john.name = "John Doe";
    cout << "name => " << john.name << endl;
    cout << "age => " << john.age << endl;
    cout << "weight => " << john.weight << endl;
    cout << "height => " << john.height << endl;
    return 0;
}