#include <iostream>
using namespace std;

int main()
{

    int temp[10] = {6, 3, 5};
    cout << sizeof(temp) << endl;
    cout << "Element : " << sizeof(*temp) << endl;
    cout << "Element : " << sizeof(&temp) << endl;

    int *pointer = &temp[0];
    cout << sizeof(pointer) << endl;
    cout << sizeof(*pointer) << endl;
    return 0;
}