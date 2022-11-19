#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    cout << a << endl;
    if (true)
    {
        int b = 100;
        cout << b << endl;
    }

    // conclusion
    /*
    {
        cant declare two variables in same block
        b =5;
        b =10; // Error
    }
    {
        b= 10;
        {           // correct way
            b=10;
        }
    }


     */
    return 0;
}