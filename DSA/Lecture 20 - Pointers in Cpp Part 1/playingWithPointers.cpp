#include <iostream>
using namespace std;

int main()
{

    int i = 7;
    int *q = &i;

    cout << q << endl;
    cout << *q << endl;

    int *p = 0;
    p = &i;

    cout << p << endl;
    cout << *p << endl;

    return 0;
}