#include <iostream>
using namespace std;

int main()
{
    // i++; = post increment
    // ++i; = pre increment
    // i+=1;
    // i--; = post increment
    // --i; = pre increment
    // i-=1;

    int i = 7;
    cout << (++i) << endl;
    cout << (i++) << endl;
    cout << (i += 1) << endl;
    cout << (i--) << endl;
    cout << (--i) << endl;
    cout << (i -= 1) << endl;
    return 0;
}