#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    ;

    map<int, int> mp; // number // idx

    int cnt = 1;

    while (n > 0)
    {
        int r = n % 10;
        n = n / 10;

        // r is the number at cnt idx

        mp[r] = cnt;
        cnt++;
    }
    cnt--;

    while (cnt >= 1)
    {
        cout << mp[cnt];
        cnt--;
    }
}