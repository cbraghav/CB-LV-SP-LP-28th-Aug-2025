#include <bits/stdc++.h>
using namespace std;

// recursion -> TC : O(2^n)
// int fib(int n)
// {
//     if (n == 0 or n == 1)
//         return n;

//     return fib(n - 1) + fib(n - 2);
// }

// Memoization : TC : O(N) // SC O(N)
int fib(int n, vector<int> &dp)
{
    if (n == 0 or n == 1)
        return n;

    if (dp[n] != -5)
        return dp[n];

    return dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
}

int main()
{

    vector<int> dp(100, -5); // -1 means , not computed as of now

    // cout << fib(7, dp) << endl;

    dp[0] = 0;
    dp[1] = 1;
    int n = 6;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << dp[n] << endl;
}