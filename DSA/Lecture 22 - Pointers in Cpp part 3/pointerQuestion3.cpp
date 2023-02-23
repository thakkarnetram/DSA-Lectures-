#include <iostream>
using namespace std;

int main()
{
    int first = 9;
    int *p = &first;
    cout << "Printing (*p)++ => " << (*p)++ << endl;
    cout << "Printing first => " << first << endl;
    return 0;
}