#include <iostream>
using namespace std;

int main()
{
    /* Print this pattern

      *
     **
    ***
   ****

   */

    int num, row, col;
    cin >> num;
    for (row = 1; row <= num; row++)
    {
        int space = num - row;
        for (space; space--;)
        {
            cout << " ";
        }
        for (col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}