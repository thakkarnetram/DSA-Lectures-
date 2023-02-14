#include <iostream>
using namespace std;

int smallestRowSum(int arr[][3], int row, int col)
{
    int mini = INT_MAX; // if wanna find the largest sum then it would be like int maxi = INT_MIN
    int numIndex = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;

        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        if (sum < mini) // largest sum then sum > maxi , maxi = sum
        {
            mini = sum;
            numIndex = row;
        }
    }
    cout << "The smallest sum is : " << mini << endl;
    return numIndex;
}

int main()
{

    int arr[3][3];
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col];
        }
        cout << endl;
    }
    int ans = smallestRowSum(arr, 3, 3);
    cout << "MIN ROW IS AT INDEX : " << ans << endl;
    return 0;
}