#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> v = {1, 2, 6, 6, 6, 6, 6, 6, 10, 13, 17, 22};
    int x = 5;

    int ans = -1;

    int low = 0;
    int hi = v.size() - 1;

    while (low <= hi)
    {
        int mid = (low + hi) / 2;

        if (v[mid] > x)
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            // answer if present ,is on right
            low = mid + 1;
        }
    }

    cout << v[ans] << " " << ans << endl;
}