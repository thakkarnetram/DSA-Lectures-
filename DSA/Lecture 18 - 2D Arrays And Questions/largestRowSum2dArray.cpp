#include <iostream>
using namespace std;

int largestRowSum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN; // if wanna find the smallest sum then it would be like int mini = INT_MAX
    int numIndex = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;

        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi) // smallest sum then sum < mini , mini = sums
        {
            maxi = sum;
            numIndex = row; // if wanna find the smallest sum then it would be like int mini = INT_MAX
        }
    }
    cout << "The maximum sum is : " << maxi << endl;
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
    int ans = largestRowSum(arr, 3, 3);
    cout << "MAX ROW IS AT INDEX : " << ans << endl;
    return 0;
}