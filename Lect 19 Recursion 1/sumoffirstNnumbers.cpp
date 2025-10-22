#include <bits/stdc++.h>

using namespace std;

int sum(int n)
{
    // base case
    if (n == 1)
        return 1;
    if (n <= 0)
        return 0;
    // recursive case
    return n + sum(n - 1);
}
int main()
{

    cout << sum(7) << endl;
    cout << sum(5) << endl;
    cout << sum(1) << endl;
    cout << sum(-1) << endl;
}