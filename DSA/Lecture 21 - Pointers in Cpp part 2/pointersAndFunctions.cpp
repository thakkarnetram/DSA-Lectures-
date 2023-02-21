#include <iostream>
using namespace std;

void print(int *p)
{
    cout << endl;
    cout << "Printing using ' p '  => " << p << endl;
    cout << "Printing using ' *p '  => " << *p << endl;
    cout << "Printing using ' &p '  => " << &p << endl;
}

void update(int *p)
{
    *p = *p + 1;
}

int getSum(int arr[], int n)
{

    cout << endl
         << "Size " << sizeof(arr) << endl;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int val = 5;
    int *p = &val;
    print(p);

    cout << endl;

    cout << "Before printing =>  " << *p << endl;
    update(p);
    cout << "After printing  =>  " << *p << endl;

    cout << endl;

    int arr[7] = {1, 2, 3, 4, 5, 8, 5};
    cout << "Sum is : => " << getSum(arr, 5) << endl;
    cout << endl;
    cout << "Sum is : => " << getSum(arr + 3, 3) << endl;
    return 0;
}