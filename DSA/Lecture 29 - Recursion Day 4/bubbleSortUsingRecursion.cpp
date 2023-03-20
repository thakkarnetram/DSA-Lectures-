#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n)
{
    // base case
    if (n == 0 || n == 1)
        return;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    bubbleSort(arr, n - 1);
}

int main()
{
    int arr[6] = {34, 22, 5, 33, 88, 99};
    bubbleSort(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}