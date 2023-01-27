#include <iostream>
using namespace std;
int binarySearch(int n)
{
    int s = 0, e = n, ans = -1;
    long long int mid = s + (e - s) / 2;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square > n)
        {
            e = mid - 1;
        }
        else if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (square == n)
        {
            return mid;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int temp)
{
    double factor = 1;
    double result = temp;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        // everytime when it itrates through the loop till precision
        // it goes like
        // 0.1
        // 0.01
        // 0.001 and so on
        for (double j = result; j * j < n; j = j + factor)
        {
            result = j;
        }
    }
    return result;
}
int main()
{
    int n;
    cout << "Enter the number :" << endl;
    cin >> n;
    int temp = binarySearch(n);
    cout << "Answer: " << morePrecision(n, 4, temp) << endl;

    return 0;
}