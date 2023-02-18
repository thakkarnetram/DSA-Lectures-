#include <iostream>
using namespace std;

int main()
{
    int num = 100;
    cout << num << endl;
    // operator of Address => &
    cout << "Address of Num is : " << &num << endl;
    // creating a pointer
    int *ptr = &num;
    cout << "Value of Pointer is : " << *ptr << endl;

    double d = 4.5;
    double *p = &d;
    cout << "Address of Double is : " << &d << endl;
    cout << "Value of Pointer is : " << *p << endl;

    // Size of Int and Pointer
    cout << "Size of Int is : " << sizeof(int) << endl;
    cout << "Size of Pointer is : " << sizeof(ptr) << endl;
    cout << "Size of Double is : " << sizeof(d) << endl;
    cout << "Size of Pointer is : " << sizeof(p) << endl;
    return 0;
}