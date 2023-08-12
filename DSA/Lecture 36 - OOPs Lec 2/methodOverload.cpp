#include <iostream>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "Animals cant speak " << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << " Dogs can bark " << endl;
    }
};

int main()
{
    Animal dog;
    Dog newDog;
    newDog.speak();
    dog.speak();
    return 0;
}