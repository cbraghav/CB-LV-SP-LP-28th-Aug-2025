#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 0;
    int b = 1;
    int c;
    int N = 10;
    cout << a << " " << b << " ";
    for (int i = 3; i <= N; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}