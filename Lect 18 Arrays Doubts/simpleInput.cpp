#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0;
    while (true)
    {
        int x;
        cin >> x;
        sum += x;
        if (sum >= 0)
        {
            cout << x << endl;
        }
        else
        {
            break;
        }
    }
}