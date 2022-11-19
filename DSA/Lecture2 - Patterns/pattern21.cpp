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
    int row;
    for (row = 1; row <= num; row++)
    {
        // Print space 1st triangle
        int space = num - row;
        for (space; space--;)
        {
            cout << " ";
        }
        // Print 2nd triangle
        int col;
        for (col = 1; col <= row; col++)
        {
            cout << col;
        }
        // Print 3rd triangle
        int start = row - 1;
        for (start; start--;)
        {
            cout << start;
        }
        cout << endl;
    }
    return 0;
}