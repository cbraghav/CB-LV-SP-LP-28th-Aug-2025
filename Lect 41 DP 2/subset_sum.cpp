#include <bits/stdc++.h>

using namespace std;

// // TC : O(N * target)
// bool recur(int idx, int target, vector<int> &v, vector<vector<int>> &dp)
// {

//     if (target == 0)
//         return true;

//     if (idx >= v.size())
//         return false;

//     if (dp[idx][target] != -1)
//         return dp[idx][target];

//     // take
//     // target -= v[idx];
//     bool take = false;
//     if (target >= v[idx])
//         take = recur(idx + 1, target - v[idx], v, dp);
//     // target += v[idx];

//     // not take
//     bool not_take = recur(idx + 1, target, v, dp);

//     return dp[idx][target] = take || not_take;
// }

int main()
{

    vector<int> v = {1, 3, 2, 7, 5};
    int k = 100;

    vector<vector<int>> dp(v.size() + 1, vector<int>(k + 10, 0));
    int n = v.size();
    for (int idx = n - 1; idx >= 0; idx--)
    {
        for (int target = 0; target <= k; target++)
        {
            if (target == 0)
            {
                dp[idx][0] = 1;
                continue;
            }
            bool take = false;
            if (target >= v[idx])
                take = dp[idx + 1][target - v[idx]]; // recur(idx + 1, target - v[idx], v, dp);
                                                     // target += v[idx];

            // not take
            bool not_take = dp[idx + 1][target]; // recur(idx + 1, target, v, dp);

            dp[idx][target] = (take || not_take) ? 1 : 0;
        }
    }

    // cout << recur(0, k, v, dp);

    cout << dp[0][k];
}