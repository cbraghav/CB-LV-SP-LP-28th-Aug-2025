#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int digit;
    cin >> digit;
    int cnt = 0;
    while (n > 0)
    {
        int r = n % 10;
        n = n / 10;
        if (r == digit)
        {
            cnt++;
        }
    }

    cout << cnt << endl;
}