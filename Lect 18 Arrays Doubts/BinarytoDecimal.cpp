#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    int ans = 0;

    while (n > 0)
    {
        int r = n % 10;
        n = n / 10;
        ans += (pow(2, cnt)) * r;
        cnt++;
    }
    cout << ans;
}