#include <bits/stdc++.h>

using namespace std;

int main()
{

    int N = 5;
    cin >> N;

    for (int row = N; row >= 1; row--)
    {
        // spaces
        // row ->5 space 0 ( N- row) // 5-5
        // row ->4 space 1  // 5- 4
        // row ->3 space 2 // 5 - 3
        int sc = N - row;
        for (int j = 1; j <= sc; j++)
        {
            cout << " " << " ";
        }

        // numbers
        for (int j = row; j >= 1; j--)
        {
            cout << j << " ";
        }

        // 0
        cout << "0 ";

        // numbers
        for (int j = 1; j <= row; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    for (int i = 1; i <= N; i++)
        cout << "  "; // 2 space
    cout << 0 << endl;

    for (int row = 1; row <= N; row++)
    {
        // spaces
        // row ->5 space 0 ( N- row) // 5-5
        // row ->4 space 1  // 5- 4
        // row ->3 space 2 // 5 - 3
        int sc = N - row;
        for (int j = 1; j <= sc; j++)
        {
            cout << " " << " ";
        }

        // numbers
        for (int j = row; j >= 1; j--)
        {
            cout << j << " ";
        }

        // 0
        cout << "0 ";

        // numbers
        for (int j = 1; j <= row; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}