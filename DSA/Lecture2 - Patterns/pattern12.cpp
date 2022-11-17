#include <iostream>
using namespace std;

int main()
{

    /* Print this pattern
    ABC
    ABC
    ABC
     */

    int num, row, col;
    cin >> num;
    for (row = 1; row <= num; row++)
    {
        for (col = 1; col <= num; col++)
        {
            char ch = 'A' + col - 1;
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}