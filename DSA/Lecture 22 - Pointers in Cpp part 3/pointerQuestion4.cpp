#include <iostream>
using namespace std;

int main()
{
    int *p = 0;
    int first = 99;
    
    // *p = &first; // Segmention Fault
    p = &first;
    cout << *p << endl;

    return 0;
}