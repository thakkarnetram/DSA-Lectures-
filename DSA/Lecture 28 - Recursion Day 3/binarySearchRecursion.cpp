#include <iostream>
using namespace std;

void print(int *arr, int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int *arr, int start, int end, int key)
{
    cout << endl;
    print(arr, start, end);
    if (start > end)
        return false;
    int mid = start + (end - start) / 2;
    cout << "value of mid => " << arr[mid] << endl;
    if (arr[mid] == key)
        return true;
    if (arr[mid] < key)
        return binarySearch(arr, mid + 1, end, key);
    else
        return binarySearch(arr, start, mid - 1, key);
}

int main()
{
    int arr[5] = {23, 55, 356, 888, 2333};
    int size = 5;
    int key = 2333;
    cout << endl;
    cout << "Present ??? " << binarySearch(arr, 0, 4, key) << endl;
    return 0;
}