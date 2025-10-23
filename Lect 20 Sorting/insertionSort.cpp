#include <bits/stdc++.h>

using namespace std;

int main()
{
    // TC O(N^2)
    vector<int> v = {5, 4, 3, 2, 1};
    int n = v.size();

    for (int i = 1; i < n; i++)
    {
        int curr = i;
        while (curr > 0)
        {
            if (v[curr] >= v[curr - 1])
            {
                break;
            }
            else
            {
                swap(v[curr], v[curr - 1]);
            }
            curr--;
        }
    }

    for (auto i : v)
    {
        cout << i << " ";
    }
}