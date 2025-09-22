#include <bits/stdc++.h>

using namespace std;

int main()
{

    int N;
    cin >> N;

    for (int row = 1; row <= N; row++)
    {
        // increasing numbers
        for (int j = 1; j <= row; j++)
        {
            cout << j << "\t";
        }
        // spaces
        int T = 2 * N - 1;
        int P = 2 * row;
        for (int j = 1; j <= T - P; j++)
        {
            cout << " " << "\t";
        }
        // dec numbers
        // for (int j = min(N - 1, row); j >= 1; j--)
        // {
        //     cout << j << "\t";
        // }
        for (int j = row; j >= 1; j--)
        {
            if (j == N)
                continue;
            cout << j << "\t";
        }
        // endl
        cout << endl;
    }
}