#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// T.C => O(n log n) avg case
// T.C => O(n log n) best case
// T.C => O(n^2) worst case
// S.C => O(n)

int partition(vector<int> &arr, int start, int end)
{
    int pivot = arr[start];
    int count = 0;

    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }

    // placing pivot at correct position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    // sorting the left right part
    // using Two Pointer
    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
            i++;
        while (arr[j] > pivot)
            j--;

        if (i < pivotIndex && j > pivotIndex)
            swap(arr[i++], arr[j--]);
    }

    return pivotIndex;
}

void quickSort(vector<int> &arr, int start, int end)
{
    // base case
    if (start >= end)
        return;

    // partition of array
    int element = partition(arr, start, end);

    // left part sorting
    quickSort(arr, start, element - 1);

    // right part sorting
    quickSort(arr, element + 1, end);
}

int main()
{
    vector<int> arr;
    int size;
    cin >> size;

    // taking vector input
    for (int i = 0; i < size; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }

    // sorting the vector using quickSort
    quickSort(arr, 0, size - 1);

    // printing the vector
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}