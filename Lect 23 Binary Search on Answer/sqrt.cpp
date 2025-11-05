#include <bits/stdc++.h>

using namespace std;

int main()
{

    int N;
    cin >> N;

    int ans = 0;

    int low = 1;
    int hi = N;

    while (low <= hi)
    {
        int mid = (low + hi) / 2;

        if (mid * mid <= N)
        // if(mid*mid*mid <=N) // cube root;
        // if(mid^4 <=N) // 4th root
        // kth root   -> if(mid^k <= N)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    cout << ans << endl;
}