#include <iostream>
using namespace std;

int main()
{
    float fahren, celsius;
  
    cout << "Enter the temperature in fahrenheit\n";
    cin >> fahren;

    celsius =  (fahren - 32)*5 / 9;
  
    cout << fahren <<" Fahrenheit is equal to " << celsius <<" Centigrade";
    return 0;
}