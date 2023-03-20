#include <iostream>
using namespace std;

bool chkPalindrome(string str, int i, int j)
{
    // base case
    if (i > j)
        return true;
    if (str[i] != str[j])
        return false;
    else
        return chkPalindrome(str, i + 1, j - 1); // Recursive call
}

int main()
{
    string str = "abba";
    cout << endl;
    bool isPalindrome = chkPalindrome(str, 0, str.length() - 1);
    if (isPalindrome)
        cout << "It's a Palindrome" << endl;
    else
        cout << "It's not a Palindrome" << endl;

    return 0;
}