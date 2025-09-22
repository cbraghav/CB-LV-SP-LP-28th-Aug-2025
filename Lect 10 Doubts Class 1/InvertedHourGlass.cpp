#include <bits/stdc++.h>
using namespace std;
int main()
{

    int N = 7;
    cin >> N;

    for (int row = N; row >= 0; row--)
    {
        // numbers
        for (int j = N; j >= row; j--)
        {
            cout << j << " ";
        }
        // spaces
        int TE = 2 * N + 1;  // total ele in each row
        int I = N - row + 1; // numbers in each row
        int SC = TE - 2 * I;
        for (int j = 1; j <= SC; j++)
        {
            cout << " " << " ";
        }
        // numbers
        for (int j = row; j <= N; j++)
        {
            if (j == 0)
                continue;
            cout << j << " ";
        }
        cout << endl;
    }

    for (int row = 1; row <= N; row++)
    {
        // numbers
        for (int j = N; j >= row; j--)
        {
            cout << j << " ";
        }
        // spaces
        int TE = 2 * N + 1;  // total ele in each row
        int I = N - row + 1; // numbers in each row
        int SC = TE - 2 * I;
        for (int j = 1; j <= SC; j++)
        {
            cout << " " << " ";
        }
        // numbers
        for (int j = row; j <= N; j++)
        {
            if (j == 0)
                continue;
            cout << j << " ";
        }
        cout << endl;
    }
}