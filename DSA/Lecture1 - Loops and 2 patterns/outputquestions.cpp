#include <iostream>
using namespace std;

int main()
{
    int a = 9;
    if (a == 9)
    {
        cout << "Niney" << endl;
    }
    else if (a > 0)
    {
        cout << "Positive" << endl;
    }
    else
    {
        cout << "Negative" << endl;
    }

    // --------------------------------------- //

    int x = 2;
    int y = x + 1;
    if ((x = 3) == y)
    {
        cout << x << endl;
    }
    else
    {
        cout << x + 1 << endl;
    }

    // --------------------------------------- //

    int c = 24;
    if (c > 20)
    {
        cout << "Love" << endl;
    }
    else if (c == 24)
    {
        cout << "Lovely" << endl;
    }
    else
    {
        cout << "Babbar" << endl;
    }
    cout << c << endl;
    return 0;
}