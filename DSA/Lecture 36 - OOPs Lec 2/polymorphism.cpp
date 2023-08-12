#include <iostream>
using namespace std;

// class functionOverload
// -> ! error: 'void functionOverload::sayHi()' cannot be overloaded with 'void functionOverload::sayHi()'
//   void sayHi()
// {
// public:
//     void sayHi()
//     {
//         cout << " Saying Hi " << endl;
//     }
//     void sayHi()
//     {
//         cout << " Saying Hi " << endl;
//     }
//     void sayHi()
//     {
//         cout << " Saying Hi " << endl;
//     }
// };

// -> Fix the overload by changing arguements .
// -> cant overload by changing the type of function
// eg ->  void ->  int / string /  -> it will be considered as same

class functionOverload
{
public:
    void sayHi()
    {
        cout << " Saying Hi " << endl;
    }
    void sayHi(string x)
    {
        cout << " Saying Hi " << x << endl;
    }
    void sayHi(int x)
    {
        cout << " Saying Hi " << x << endl;
    }
    int sayHi(int x, int y)
    {
        return x + y;
    }
};

int main()
{
    functionOverload ok;
    ok.sayHi(2, 1);
    return 0;
}