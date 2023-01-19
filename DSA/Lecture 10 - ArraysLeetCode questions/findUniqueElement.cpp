#include <iostream>
using namespace std;

/* Find Unique Element In an array */

int findUnique(int *arr, int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans xor arr[i];
    }
    return ans;
}

int main()
{

    return 0;
}