#include <iostream>
using namespace std;

void sortOneTwo(int arr[], int n)
{
    int c0 = 0, c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            c0++;
        }
        else if (arr[i] == 1)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (c0 > 0)
        {
            arr[i] = 0;
            c0--;
        }
        else if (c1 > 1)
        {
            arr[i] = 1;
            c1--;
        }
        else
        {
            arr[i] = 2;
            c2--;
        }
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[10] = {0, 1, 2, 2, 1, 0, 1, 2, 0, 1};

    sortOneTwo(arr, 10);
    printArr(arr, 10);
    return 0;
}