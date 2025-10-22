#include <bits/stdc++.h>

using namespace std;

int fact(int n)
{
    // base case
    if (n == 1)
        return 1;
    if (n <= 0)
        return 0;
    // recursive case
    return n * fact(n - 1);
}
int main()
{

    cout << fact(7) << endl;
    cout << fact(5) << endl;
    cout << fact(1) << endl;
    cout << fact(-1) << endl;
}