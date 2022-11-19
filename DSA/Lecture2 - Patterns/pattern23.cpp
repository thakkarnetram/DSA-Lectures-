#include <iostream>
using namespace std;

int main()
{
    /* Print this pattern
    1234554321
    1234**4321
    123****321
    12******21
    1********1
*/

    int num;
    cin >> num;
    cout << endl;
    int row = 1;

    while (row <= num)
    {
        //  1st Triangle
        int col = 1;
        while (col <= num - row + 1) // eg => num=5 , 5-row+1 , 5-1+1 = 5 ...
        {
            cout << col;
            col++;
        }
        // 2nd Triangle
        int star = 2 * (row - 1); // eg => 2*(1-1) = 2 , 2*(2-1) = 2 ...
        while (star)
        {
            cout << "*";
            star--;
        }
        // 3rd Triangle
        col = 1;
        while (col <= num - row + 1) // eg => num=4 , 4-1+1 ....
        {
            cout << (num - row - col + 2); // => 5-1-1+2 = 5, 5-1-2+2 = 4 ...
            col++;
        }
        cout << endl;
        row++;
    }
}