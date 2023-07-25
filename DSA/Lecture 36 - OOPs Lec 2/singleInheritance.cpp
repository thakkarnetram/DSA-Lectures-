#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

    void speak()
    {
        cout << "Animal is speaking" << endl;
    }
};

class Dog : public Animal
{
};

int main()
{
    Dog dog;
    dog.speak();
    return 0;
}