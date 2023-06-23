#include <iostream>
using namespace std;

class Obj
{

public:
    char codeWord;
    int level;
};

class NewObj
{
public:
    string Name;
    int Age;
    char Gender;
};

int main()
{
    Obj object1;
    NewObj object2;
    cout << "Size of Object1 is " << sizeof(object1) << endl;
    cout << "Size of Object2 is " << sizeof(object2) << endl;
    return 0;
}