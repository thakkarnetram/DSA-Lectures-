#include <iostream>
using namespace std;

int main()
{
    int i = 3;
    int &j = i;
    cout << i << endl;
    i += 1;
    cout << i << endl;
    j += 1;
    cout << i << endl;
    j += 1;
    cout << j << endl;

    return 0;
}