#include <iostream>
using namespace std;

int main()
{
    /* Print this pattern
    ABC
    DEF
    GHI
     */

    int num, row, col;
    char ch = 'A';
    cin >> num;
    for (row = 1; row <= num; row++)
    {
        for (col = 1; col <= num; col++)
        {

            cout << ch;
            ch++;
        }
        cout << endl;
    }
    return 0;
}