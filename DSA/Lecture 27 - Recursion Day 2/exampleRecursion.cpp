#include <iostream>
using namespace std;

void reachHome(int src, int dest) // a function
{
    cout << "Source : " << src << " Destination : " << dest << endl;
    if (src == dest)
    {
        cout << "Reached" << endl;
        return;
    }
    src += 1;
    reachHome(src, dest); // calling itself again
}

int main()
{
    int dest = 10;
    int src = 1;
    cout << endl;
    reachHome(src, dest);
    return 0;
}