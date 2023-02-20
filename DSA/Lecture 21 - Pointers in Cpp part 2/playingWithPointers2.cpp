#include <iostream>
using namespace std;

int main()
{
    int a[20] = {3, 4, 5, 6, 7};
    cout << "Printing using &a[0] =>  :- " << &a[0] << endl;
    cout << "Printing using &a :- " << &a << endl;
    cout << "Printing using a :- " << a << endl;

    cout << endl;

    int *p = &a[0];
    cout << "Printing using p :- " << p << endl;
    cout << "Printing using &p => :- " << &p << endl;
    cout << "Printing using *p :- " << *p << endl;

    return 0;
}