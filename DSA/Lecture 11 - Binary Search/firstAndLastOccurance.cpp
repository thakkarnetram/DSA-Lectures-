#include <iostream>
using namespace std;

int firstOccurance(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - n) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOccurance(int arr[], int n, int key)
{

    int s = 0, e = n - 1;
    int mid = s + (e - n) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{

    int even[5] = {1, 2, 3, 3, 5};
    cout << "First Occurance of 3 is at Index : " << firstOccurance(even, 5, 3) << endl;
    cout << "Last Occurance of 3 is at Index : " << lastOccurance(even, 5, 3) << endl;
    return 0;
}