#include <iostream>
using namespace std;

void print(int arr[], int n, int start = 0)
{
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[4] = {0, 1, 2, 4};
    int size = 4;
    print(arr, size);
    cout << endl;
    print(arr, size, 2);

    return 0;
}