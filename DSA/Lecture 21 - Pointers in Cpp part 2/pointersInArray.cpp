#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 22, 333, 4444, 55555, 666666, 7777777, 88888888, 999999999, 1010101010};
    cout << "Address of the array is : " << arr << endl;
    cout << arr[4] << endl;
    cout << "Address of the array is : " << &arr[0] << endl;
    cout << "Using Star : " << *arr << endl;
    cout << "Using Star : " << *arr + 1 << endl;   // here it is arr[0] value+ 1 i.e arr[0] = 1+1 =>2
    cout << "Using Star : " << *(arr + 1) << endl; // here  in brackets arr +1 is arr[0]= 1 + arr[1]= 22 = arr[0+1]
    //  i.e arr[1] so it will return arr[1] value 22
    cout << "Using Star : " << (*arr) + 1 << endl; // here it is arr[0] value+ 1 i.e arr[0] = 1+1 =>2
    int k = 3;
    cout << k[arr];
    return 0;
}