#include <iostream>
using namespace std;

void update(int **p)
{
    // p = p + 1;
    //  will anything change? NO

    // *p = *p + 1;
    //  will anything change?- YES

    **p = **p + 1;
    //  will anything change?- YES
}

int main()
{
    int val = 10;
    int *p = &val; // Single pointer initialization
    int **p2 = &p; // Two pointers initialization

    cout << endl;
    // Printing the pointers

    cout << "Printing val : " << val << endl;   // output 10 all will print the same value
    cout << "Printing &val : " << &val << endl; // output will be address of val

    cout << endl
         << endl;

    cout << "Printing p : " << p << endl;   // output will be address of val
    cout << "Printing *p : " << *p << endl; // output 10 all will print the same value
    cout << "Printing &p : " << &p << endl; // output will be address of first pointer

    cout << endl;
    update(p2);
    cout << endl;

    cout << "Printing p2 : " << p2 << endl;     // output will be address of first pointer
    cout << "Printing *p2 : " << *p2 << endl;   // output will be address of val
    cout << "Printing **p2 : " << **p2 << endl; // output 10 all will print the same value
    cout << "Printing &p2 : " << &p2 << endl;
    cout << endl;
    return 0;
}