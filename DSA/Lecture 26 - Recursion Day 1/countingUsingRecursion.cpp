#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
        return;
    // Tail Recursion
    cout << n << " ";
    print(n - 1);
    // Head Recursion
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}