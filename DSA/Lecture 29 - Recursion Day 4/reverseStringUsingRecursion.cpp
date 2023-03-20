#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseStr(string &str, int i, int j)
{
    // base case
    if (i > j)
        return;
    swap(str[i], str[j]);
    i++;
    j--;
    // Recursive call
    reverseStr(str, i, j);
}

int main()
{
    string s = "name";
    reverseStr(s, 0, s.length() - 1);
    cout << s;
    return 0;
}