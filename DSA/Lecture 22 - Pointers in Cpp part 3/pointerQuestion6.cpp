#include <iostream>
using namespace std;

int main()
{
    float f1 = 15.4;
    float f2 = 20.6;
    float *ptr = &f1;
    (*ptr)++;
    *ptr = f2;
    cout << *ptr << "  " << f1 << "  " << f2 << endl;
    return 0;
}