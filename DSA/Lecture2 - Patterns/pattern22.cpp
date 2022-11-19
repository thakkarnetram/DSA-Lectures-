#include <iostream>
using namespace std;

int main()
{
    /* Print this pattern
      1
     121
    12321
   1234321
 */
    int num;
    cin >> num;
    int row = 1;
    while (row <= num)
    {
        // Print space
        int space = num - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        // 2nd triangle
        int col = 1;
        while (col <= row)
        {
            cout << col;
            col = col + 1;
        }
        // 3rd triangle
        int start = row - 1;
        while (start)
        {
            cout << start;
            start = start - 1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}