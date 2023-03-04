// TLE MAREGA CAUSE ITS A DP QUESTION
#include <bits/stdc++.h>
int countDistinctWays(long long nStairs)
{
    //  Write your code here.
    if (nStairs == 0)
        return 1;
    if (nStairs < 0)
        return 0;
    int ans = countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);
    return ans;
}