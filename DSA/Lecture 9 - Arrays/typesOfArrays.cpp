#include <iostream>
using namespace std;

int main()
{
    char ch[10] = {'a', 'b', 'c'};
    cout << ch[4] << endl;

    cout << "printing the array" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << ch[i] << " ";
    }
    cout << "Array printed" << endl;
    return 0;
}
