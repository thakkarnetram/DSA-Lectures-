#include <iostream>
using namespace std;

int main()
{
    int first = 8;
    int second = 11;
    int *three = &second;
    first = *three;
    *three += 2;
    cout << "First " << first << " Second " << second << endl;
    return 0;
}