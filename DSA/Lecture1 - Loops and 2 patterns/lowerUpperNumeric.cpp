#include <iostream>
using namespace std;

int main()
{
    // Question => 'a' to 'z' print lowercase ,
    // 'A' to 'Z' print upper case ,
    // '0' to '9' print numeric

    char ch;
    cout << "The character is : " << endl;
    cin >> ch;

    if (ch >= 97 && ch <= 122)
    {
        cout << "Lowercase" << endl;
    }
    else if (ch >= 65 && ch <= 90)
    {
        cout << "Uppercase" << endl;
    }
    else
    {
        cout << "Numeric" << endl;
    }

    return 0;
}