#include <iostream>
using namespace std;

int main()
{

    int arr[3][4];

    for (int row = 0; row < 3; row++) // Row Wise Input
    {
        for (int col = 0; col < 4; col++)
        { 
            cin >> arr[row][col];
        }
        cout << endl;
    }

    for (int row = 0; row < 4; row++) // Col Wise Input
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[col][row];
        }
        cout << endl;
    }

    for (int row = 0; row < 3; row++) // Row Wise Output
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}