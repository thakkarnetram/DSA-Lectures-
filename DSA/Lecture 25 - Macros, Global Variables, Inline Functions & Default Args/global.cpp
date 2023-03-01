#include <iostream>
using namespace std;

int global = 88;

void func()
{
    cout << global << endl;
    global += 2; // global var can be modified in any function so don't use it BAD PRACTICE !
    cout << global << endl;
    global += 2; // global var can be modified in any function so don't use it BAD PRACTICE !
}

int main()
{
    func();
    cout << global;
    return 0;
}