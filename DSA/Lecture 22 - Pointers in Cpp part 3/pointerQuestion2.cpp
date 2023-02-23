#include <iostream>
using namespace std;

int main()
{
    int first = 5;
    int *p = &first;
    int *q = p;
    cout << "Before => " << first << endl;
    (*q)++;
    cout << " After => " << first << endl;
    return 0;
}