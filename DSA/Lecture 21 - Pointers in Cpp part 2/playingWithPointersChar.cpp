#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    char ch[6] = "adcde";

    cout << arr << endl;
    cout << ch << endl;

    cout << endl;

    char *c = &ch[0];
    cout << "Print using `c`  " << c << endl;
    cout << "Print using `*c`  " << *c << endl;
    cout << "Print using `&c`  " << &c << endl;

    cout << endl;

    char chr = 'A';
    char *p = &chr;
    cout << "Print using  ` p` " << p << endl;
    cout << "Print using  `*p` " << *p << endl;
    cout << "Print using  `&p` " << &p << endl;
    return 0;
}