#include <iostream>
using namespace std;

int main()
{
    int first = 8;
    int second = 16;
    int *ptr = &second;
    *ptr = 10;
    cout << "First " << first << " second " << second << endl;

    return 0;
}