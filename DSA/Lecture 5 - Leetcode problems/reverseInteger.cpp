#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    float ans = 0;
    while (x != 0)
    {
        int digit = x % 10;
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
        {
            cout << 0;
        }
        else
        {
            ans = (ans * 10) + digit;
            x = x / 10;
            cout << ans;
        }
    }
    return 0;
}