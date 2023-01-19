#include <iostream>
using namespace std;

/* Print the sum of elements in the array */

int sum(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Sum of all elements in the array is: " << sum(arr, n) << std::endl;

    return 0;
}