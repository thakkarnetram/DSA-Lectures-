#include <iostream>
using namespace std;

void update2(int &n)
{
    n += 1;
}
void update1(int n)
{
    n += 1;
}

int main()
{
    int n = 91;
    cout << "Before updating " << n << endl;
    update2(n);
    cout << "After updating " << n << endl;
    return 0;
}