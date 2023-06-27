#include <iostream>
using namespace std;

class Person
{
public:
    int a;
    static int b;

    // creating static function
    static int random()
    {
        return b * 7;
    }
};

int Person ::b = 5;

int main()
{
    cout << Person::b << endl;
    cout << Person ::random() << endl;
    return 0;
}