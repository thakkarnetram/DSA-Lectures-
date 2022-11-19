#include <iostream>
using namespace std;

int main()
{
    /* Print this pattern
    ABC
    BCD
    CDE
    */
    int num, row, col;
    cin >> num;
    for (row = 1; row <= num; row++)
    {
        char ch = 'A' + row - 1;
        for (col = 1; col <= num; col++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    return 0;
}