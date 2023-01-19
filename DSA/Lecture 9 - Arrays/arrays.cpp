#include <iostream>
using namespace std;

int main()
{
    int num[10];
    cout << "value at index 8" << num[8] << endl;

    /* --------------------------------------------- */

    int number[12] = {3, 4, 563, 2};
    cout << "Value at index 12" << number[12] << endl;

    /* --------------------------------------------- */

    int numm[17] = {112, 23, 33, 432, 533, 23, 33, 432};
    int n = 17;
    cout << "printing the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << numm[i] << " ";
    }

    

    return 0;
}