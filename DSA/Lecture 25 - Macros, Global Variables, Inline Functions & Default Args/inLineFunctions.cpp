#include <iostream>
using namespace std;

inline int func(int &a, int &b)
{
    return (a > b) ? a : b;
}

int main()
{
    int a = 1;
    int b = 2;
    int ans = 0;
    ans = func(a, b);
    cout << ans << endl;
    a = a + 3;
    ans = func(a, b);
    cout << ans << endl;
    return 0;
}