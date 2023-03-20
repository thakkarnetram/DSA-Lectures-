#include <iostream>
using namespace std;

void selectionSort(int *arr, int n, int index = 0)
{
    // base case
    if (index == n - 1)
        return;
    int minIndex = index;
    for (int i = index + 1; i < n; i++)
    {
        if (arr[i] < arr[minIndex])
            minIndex = i;
    }
    swap(arr[index], arr[minIndex]);
    selectionSort(arr, n, index + 1);
}

int main()
{
    int arr[5] = {3, 2, 1, 5, 8};
    selectionSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}