#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num = 1;
    int i = 1;
    while (n >= i)
    {
        int j = 1;
        while (j <= i)
        {
            cout << num << " ";
            num++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;

    /*
    1
    2 3
    4 5 6 */
}