#include <bits/stdc++.h>

using namespace std;

int main()
{
    // TC O(N+M);
    // SC O(N+M);
    vector<int> v1 = {1, 3, 5, 6, 9};
    int n = v1.size();

    vector<int> v2 = {2, 4, 6, 10, 11};
    int m = v2.size();

    vector<int> ans;

    int p1 = 0;
    int p2 = 0;

    while (p1 < n && p2 < m)
    {
        if (v1[p1] <= v2[p2])
        {
            ans.push_back(v1[p1]);
            p1++;
        }
        else
        {
            ans.push_back(v2[p2]);
            p2++;
        }
    }

    while (p1 < n)
    {
        ans.push_back(v1[p1]);
        p1++;
    }

    while (p2 < m)
    {
        ans.push_back(v2[p2]);
        p2++;
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }
}