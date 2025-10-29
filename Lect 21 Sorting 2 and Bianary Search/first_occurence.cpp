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

        if (v[mid] == x)
        {
            ans = mid;
            hi = mid - 1; // check for left occur
            // low = mid + 1// right most occur
            // break;
        }
        else if (x < v[mid])
        {
            // answer if present is on left
            hi = mid - 1;
        }
        else
        {
            // answer if present ,is on right
            low = mid + 1;
        }
    }

    if (ans == -1)
    {
        cout << "element not found" << endl;
    }
    else
    {
        cout << "element found at idx (leftmost) " << ans << endl;
    }
}