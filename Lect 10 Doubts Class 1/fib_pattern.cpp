#include <bits/stdc++.h>

using namespace std;

int main()
{

    int N;
    cin >> N;

    if (N >= 1)
        cout << "0\n";
    if (N >= 2)
        cout << "1\t1\n";
    int a = 1;
    int b = 1;
    int c;
    for (int row = 3; row <= N; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            c = a + b;
            cout << c << "\t";
            a = b;
            b = c;
        }
        cout << endl;
    }
}