#include <iostream>
using namespace std;

void increment(int **p)
{
    ++(**p);
}

int main()
{
    int num = 110;
    int *ptr = &num;
    cout << num << "  " << &num << endl;
    increment(&ptr);
    cout << num << "  " << &num << endl;

    return 0;
}