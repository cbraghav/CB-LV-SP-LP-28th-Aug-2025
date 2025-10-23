#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> v = {5, 4, 3, 2, 1};
    int n = v.size();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j + 1 < n - i; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }

    for (auto i : v)
    {
        cout << i << " ";
    }
}