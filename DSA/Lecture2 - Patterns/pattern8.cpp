#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;

    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row + col - 1 << " ";

            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;

    /*
    1
    2 3
    3 4 5
    4 5 6 7
    5 6 7 8 9

    */
}