

#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Q ( l, r)

    vector<int> arr = {5, 5, 3, 2, 24, 1, 25, 1};
    int n = arr.size();
    vector<int> pref_sum(n, 0);

    pref_sum[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        pref_sum[i] = pref_sum[i - 1] + arr[i];
    }

    int q = 10;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        if (l == 0)
        {
            cout << pref_sum[r];
        }
        else
        {
            cout << pref_sum[r] - pref_sum[l - 1];
        }
        cout << endl;
    }
}