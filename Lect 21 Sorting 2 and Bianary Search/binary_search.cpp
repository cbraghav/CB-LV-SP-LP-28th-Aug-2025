#include <bits/stdc++.h>

using namespace std;

int bs(vector<int> &v, int low, int hi, int x)
{
    if (low >= hi)
        return -1;
    int mid = (low + hi) / 2;
    if (v[mid] == x)
    {
        return mid;
    }
    else if (x < v[mid])
    {
        // answer if present is on left
        return bs(v, low, mid - 1, x);
    }
    else
    {
        return bs(v, mid + 1, hi, x);
    }
}
int main()
{

    vector<int> v = {1, 2, 4, 6, 9, 10, 13, 17, 22};
    int x = 12;

    int ans = -1;

    int low = 0;
    int hi = v.size() - 1;

    // while (low <= hi)
    // {
    //     int mid = (low + hi) / 2;

    //     if (v[mid] == x)
    //     {
    //         ans = mid;
    //         break;
    //     }
    //     else if (x < v[mid])
    //     {
    //         // answer if present is on left
    //         hi = mid - 1;
    //     }
    //     else
    //     {
    //         // answer if present ,is on right
    //         low = mid + 1;
    //     }
    // }
    ans = bs(v, low, hi, x);

    if (ans == -1)
    {
        cout << "element not found" << endl;
    }
    else
    {
        cout << "element found at idx " << ans << endl;
    }
}