#include <bits/stdc++.h>

using namespace std;

int main()
{
// 
    int N = 7;
    cin >> N;

    int RC = (N + 1) / 2;

    for (int row = 1; row <= RC; row++)
    {
        // spaces
        for (int j = 1; j <= N + 1 - 2 * row; j++)
        {
            cout << " " << " ";
        }
        // numbers
        for (int j = row; j >= 1; j--)
        {
            cout << j << " ";
        }
        // spaces
        for (int j = 1; j <= 2 * row - 3; j++)
        {
            cout << " " << " ";
        }
        // numbers
        for (int j = 1; j <= row; j++)
        {
            if (row == 1)
                continue;
            cout << j << " ";
        }
        cout << endl;
    }

    for (int row = RC - 1; row >= 1; row--)
    {
        // spaces
        for (int j = 1; j <= N + 1 - 2 * row; j++)
        {
            cout << " " << " ";
        }
        // numbers
        for (int j = row; j >= 1; j--)
        {
            cout << j << " ";
        }
        // spaces
        for (int j = 1; j <= 2 * row - 3; j++)
        {
            cout << " " << " ";
        }
        // numbers
        for (int j = 1; j <= row; j++)
        {
            if (row == 1)
                continue;
            cout << j << " ";
        }
        cout << endl;
    }
}