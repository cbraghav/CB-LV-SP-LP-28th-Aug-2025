#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> v = {5, 2, 1, 3, 4};
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        // find min_idx
        int min_idx = i;

        for (int j = i; j < n; j++)
        {
            if (v[j] < v[min_idx])
            {
                min_idx = j;
            }
        }

        // swap
        swap(v[i], v[min_idx]);
    }
}