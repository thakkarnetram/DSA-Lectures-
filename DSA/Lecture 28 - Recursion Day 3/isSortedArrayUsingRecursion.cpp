#include <iostream>
using namespace std;

bool isSorted(int *arr, int n)
{
    // base case
    if (n == 0 || n == 1)
        return true;
    if (arr[0] > arr[1])
        return false;
    else
    {
        bool remainingPart = isSorted(arr + 1, n - 1);
        return remainingPart;
    }
}

int main()
{
    int arr[5] = {45, 32, 488, 777, 22};
    int n = 5;
    bool ans = isSorted(arr, n);
    if (ans)
    {
        cout << "Array Sorted" << endl;
    }
    else
    {
        cout << "Array Not Sorted" << endl;
    }

    return 0;
}