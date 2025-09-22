#include <bits/stdc++.h>

using namespace std;

int main()
{

    int N;
    cin >> N;

    for (int row = 1; row <= N; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            if (col == 1 || col == row)
            {
                cout << row << " ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}