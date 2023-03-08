#include <iostream>
using namespace std;

void print(int *arr, int n)
{
    cout << "size of array is " << n << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool linearSearch(int *arr, int size, int key)
{
    print(arr, size);
    // base case
    if (size == 0)
        return false;
    if (arr[0] == key)
        return true;
    else
    {
        bool found = linearSearch(arr + 1, size - 1, key);
        return found;
    }
}

int main()
{
    int arr[5] = {0, 1, 2, 3, 4};
    int size = 5;
    int key = 4;
    bool ans = linearSearch(arr, size, key);
    if (ans)
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
    return 0;
}