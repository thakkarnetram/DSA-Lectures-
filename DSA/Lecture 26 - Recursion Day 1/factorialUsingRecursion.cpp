#include <iostream>
using namespace std;

int factorial(int n)
{
    // base case
    while (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number to find the factorial" << endl;
    cin >> n;

    int ans = factorial(n);
    cout << ans << endl;
    return 0;
}