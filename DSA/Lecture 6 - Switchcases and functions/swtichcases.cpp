#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    switch (n)
    {
    case 1:
        cout << n + 1;
        break;
    case 2:
        cout << n + 2;
        break;

    default:
        cout << "nvm";
        break;
    }
    return 0;
}