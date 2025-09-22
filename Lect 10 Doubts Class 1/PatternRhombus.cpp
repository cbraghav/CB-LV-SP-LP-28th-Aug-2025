#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int row = 1; row <= N; row++)
    {
        // spaces
        int space_cnt = N - row;
        for (int j = 1; j <= space_cnt; j++)
        {
            cout << " " << "\t";
        }
        // numbers
        for (int j = row; j <= 2 * row - 1; j++)
        {
            cout << j << "\t";
        }
        for (int j = 2 * row - 2; j >= row; j--)
        {
            cout << j << "\t";
        }

        cout << endl;
    }

    for (int row = N - 1; row >= 1; row--)
    {
        // spaces
        int space_cnt = N - row;
        for (int j = 1; j <= space_cnt; j++)
        {
            cout << " " << "\t";
        }
        // numbers
        for (int j = row; j <= 2 * row - 1; j++)
        {
            cout << j << "\t";
        }
        for (int j = 2 * row - 2; j >= row; j--)
        {
            cout << j << "\t";
        }

        cout << endl;
    }
}