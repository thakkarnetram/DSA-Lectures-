#include <iostream>
using namespace std;

/* Reverse an array */

void reverseArray(int array[], int n)
{
    int start = 0;
    int end = 0;

    while (start <= end)
    {
        swap(array[start], array[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {1,
                  233,
                  443,
                  -4,
                  5,
                  54};
    int brr[5] = {1,
                  23,
                  43,
                  -4,
                  54};

    reverseArray(arr, 6);
    reverseArray(brr, 5);
    printArray(arr, 6);
    printArray(brr, 5);

    return 0;
}