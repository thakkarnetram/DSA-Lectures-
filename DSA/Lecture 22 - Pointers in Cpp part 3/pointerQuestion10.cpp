#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 54, 7};
    cout << arr << endl; // arr , &arr , &arr[0] only print address to print Value use `*`
    cout << &arr << endl;
    cout << *(arr + 1) << endl;
    return 0;
}