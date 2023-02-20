#include <iostream>
using namespace std;

int main()
{

    int arr[10];
    int *ptr = &arr[0];

    cout << "Before " << ptr << endl;
    ptr = ptr + 1;
    cout << "After +1  " << ptr << endl;
    ptr = ptr + 2;
    cout << "After +2 " << ptr << endl;

    return 0;
}