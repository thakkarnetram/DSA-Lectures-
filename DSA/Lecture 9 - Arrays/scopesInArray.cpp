#include <iostream>
using namespace std;

void update(int arr[], int n)
{
    cout << endl
         << "Inside the update function" << endl;

    arr[0] = 100;

    // print array
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Going to main function" << endl;
}

int main()
{

    int arr[3] = {14, 34, 45};
    update(arr, 3);

    cout << endl
         << "Printing in main function" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}