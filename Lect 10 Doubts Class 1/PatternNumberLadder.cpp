#include <bits/stdc++.h>

using namespace std;

int main()
{

    int N;
    cin >> N;

    int cnt = 1;

    for (int row = 1; row <= N; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << cnt << "\t";
            cnt++;
        }
        cout << endl;
    }
}