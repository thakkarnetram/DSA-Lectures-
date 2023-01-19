#include <iostream>
using namespace std;

int sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    /* Print the sum of elements in the array using diff method ig*/
    int n;
    cout << "Enter no of elements in the array";
    cin >> n;

    int arr[100];
    cout << "Enter all the elements in the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Sum of elements in the array: " << sum(arr, n) << endl;
    return 0;
}