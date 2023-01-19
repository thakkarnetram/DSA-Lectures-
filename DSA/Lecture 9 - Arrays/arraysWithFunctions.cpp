#include <iostream>
using namespace std;

/* Print array using function */
void print_array(int arr[], int size)
{
    cout << "printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Array printed" << endl;
}

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

    /* --------------------------------------------- */

    int fourth[17] = {0};
    int nm = 17;
    cout << "printing the array" << endl;
    for (int i = 0; i < nm; i++)
    {
        cout << fourth[i] << " ";
    }

    /* --------------------------------------------- */

    int fifth[200] = {1};
    int nmm = 200;
    print_array(fifth, nmm);

    return 0;
}