#include <bits/stdc++.h>

using namespace std;

int main()
{

    /*
        *****
       *   *
      *   *
     *   *
    *****


    */

    int N;
    cin >> N;

    for (int row = 1; row <= N; row++)
    {
        // spaces
        for (int j = 1; j <= N - row; j++)
        {
            cout << " ";
        }
        // patterns
        if (row == 1 || row == N)
        {
            // complete start
            for (int j = 1; j <= N; j++)
            {
                cout << "*";
            }
        }
        else
        {
            //  * space *
            cout << "*";
            for (int j = 1; j <= N - 2; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        // new line
        cout << endl;
    }
}