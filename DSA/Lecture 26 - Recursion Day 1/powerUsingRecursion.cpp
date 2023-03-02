#include <iostream>
using namespace std;

int power(long double n)
{
    // base case
    if (n == 0)
        return 1;

    // recursive relation
    long double smallProb = power(n - 1);
    long double bigProb = 2 * smallProb;
    // return 2 * power(n - 1);
    return bigProb;
}

int main()
{

    long double n;
    cin >> n;
    long double ans = power(n);
    cout << ans << endl;
    return 0;
}