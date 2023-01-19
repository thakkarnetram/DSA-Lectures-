#include <iostream>
using namespace std;

int main()
{
    // Calulator using Switch Case
    int a;
    cout << "Enter a :" << endl;
    cin >> a;
    int b;
    cout << "Enter b :" << endl;
    cin >> b;
    switch (a && b)
    {
    case 1:
        cout << "a + b : " << a + b << endl;

    case 2:
        cout << "a - b : " << a - b << endl;

    case 3:
        cout << "a * b : " << a * b << endl;

    case 4:
        cout << "a / b : " << a / b << endl;

    case 5:
        cout << "a % b : " << a % b << endl;
        break;
    }
    return 0;
}