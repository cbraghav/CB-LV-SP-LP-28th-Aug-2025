#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 5;

    /*
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
    */

    // int row_count = n;
    for (int i = 1; i <= n; i++)
    {
        // cout << "line" << i;

        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    /*

    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    */

    int row_count = n;
    for (int i = 1; i <= row_count; i++)
    {
        // cout << "line" << i;
        // int col_count = i;
        int col_count = n - i + 1;
        for (int j = 1; j <= col_count; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}