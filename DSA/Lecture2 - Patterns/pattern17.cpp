#include <iostream>
using namespace std;

int main()
{
    /* Print this pattern
    D
    C D
    B C D
    A B C D
   */
    int num, row, col;
    cin >> num;
    for (row = 1; row <= num; row++)
    {
        char ch = 'A' + num - row;
        for (col = 1; col <= row; col++)

        {

            cout << ch;
            ch++;
        }
        cout << endl;
    }
    return 0;
}