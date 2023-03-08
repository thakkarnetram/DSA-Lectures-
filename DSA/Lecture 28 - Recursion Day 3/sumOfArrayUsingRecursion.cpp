#include <iostream>
using namespace std;

int getSum(int *arr, int n)
{
    // Base case
        if (n == 0)
            return 0;
        if (n == 1)
            return arr[0];
    
    int remain = getSum(arr + 1, n - 1);
    int ans = arr[0] + remain;
    return ans;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int sum = getSum(arr, n);
    cout << "Sum is " << sum << endl;
    return 0;
}