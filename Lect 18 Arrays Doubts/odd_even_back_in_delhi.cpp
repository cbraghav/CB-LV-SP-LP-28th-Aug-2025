#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase = 0;
    cin >> testcase;
    while (testcase--)
    {
        int sum_e = 0;
        int sum_o = 0;
        int n;
        cin >> n;

        while (n > 0)
        {
            int r = n % 10;
            n = n / 10;
            if (r % 2 == 1)
            {
                sum_o += r;
            }
            else
            {
                sum_e += r;
            }
        }

        if (sum_o % 3 == 0 || sum_e % 4 == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
            ;
        }
    }
    return 0;
}