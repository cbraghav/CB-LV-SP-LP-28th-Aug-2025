#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N1, N2;
    cin >> N1 >> N2;

    int cnt = 1;

    while (N1 > 0)
    {

        int t = 3 * cnt + 2;

        if (t % N2 != 0)
        {

            cout << t << endl;
            N1--;
        }
        cnt++;
    }
}