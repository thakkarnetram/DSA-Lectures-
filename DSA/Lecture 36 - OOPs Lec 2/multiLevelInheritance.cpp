#include <iostream>
using namespace std;

class Person
{
public:
    int height;
    int weight;

    void sayHello()
    {
        cout << "hello " << endl;
    };
};

class Human1 : public Person
{
};

class Human2 : public Human1
{
};

class Human3 : public Human2
{
};

int main()
{
    Human1 human1;
    Human2 human2;
    Human3 human3;

    human1.sayHello();
    human2.sayHello();
    human3.sayHello();
    return 0;
}