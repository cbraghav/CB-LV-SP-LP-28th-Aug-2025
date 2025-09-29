#include <bits/stdc++.h>

using namespace std;

int main()
{
    // O(N)
    int arr[] = {8, 10, 4, 3, 9, 11, 9, 8, 1, 2};
    int ans = INT_MIN; //
    // int ans_min = INT_MAX;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, arr[i]);
        // ans = min(ans, arr[i])
    }
    cout << ans << endl;
}