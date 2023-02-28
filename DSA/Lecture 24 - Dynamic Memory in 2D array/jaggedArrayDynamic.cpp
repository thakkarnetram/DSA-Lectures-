#include <iostream>
using namespace std;

int main()
{
    // rows
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    int **arr = new int *[rows];

    // create each row dynamically
    for (int i = 0; i < rows; i++)
    {
        // number of columns for this row
        int cols;
        cout << "Enter number of columns for row " << i << ": ";
        cin >> cols;

        // allocate memory for this row
        arr[i] = new int[cols];

        // enter elements
        cout << "Enter elements for row " << i << ": ";
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    // print array
    cout << "Array: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // free memory
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
