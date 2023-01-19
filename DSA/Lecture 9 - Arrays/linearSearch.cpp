#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    /* Linear Search in Arrays  */

    int arr[10] = {3, 35, 221, 544, 88, 900, 22, 111, 1, 333};

    cout << "Enter the value you want to search in array" << endl;
    int key;
    cin >> key;

    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "Found the value you are looking for in the array " << endl;
    }
    else
    {
        cout << "Couldn't find the value you are looking for in the array " << endl;
    }

    return 0;
}