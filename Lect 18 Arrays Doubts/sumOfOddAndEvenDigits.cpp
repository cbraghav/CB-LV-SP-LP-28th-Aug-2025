#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int oddSum = 0;
    int EvenSum = 0;
    int cnt = 1;
    while (n > 0)
    {
        int r = n % 10;
        n = n / 10;
        // cout << r << " ";
        if (cnt % 2 == 1)
        {
            oddSum += r;
        }
        else
        {
            EvenSum += r;
        }
        cnt++;
    }

    cout << oddSum << endl
         << EvenSum << endl;
}