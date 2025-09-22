#include <bits/stdc++.h>

using namespace std;

int main()
{

    int N = 6;
    // cin>> N;

    for (int row = 1; row <= N; row++)
    {
        int c = 1;
        for (int j = 1; j <= row; j++)
        {
            cout << c << "\t";
            c = c * (row - j);
            c = c / j;
        }
        cout << endl;
    }
}