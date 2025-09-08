#include <bits/stdc++.h>
using namespace std;

int main()
{

    // int i = 1;
    // while (i <= 5)
    // {
    //     cout << i << " ";
    //     i++;
    // }

    // for (int i = 1; i <= 5; i++)
    // {
    //     cout << i << " ";
    // }

    // int i = 1;
    // for (; i <= 5; i++)
    // {
    //     cout << i << " ";
    // }

    // int i = 1;
    // for (; i <= 5;)
    // {
    //     cout << i << " ";
    //     i++;
    // }

    // int i = 1;
    // for (;;)
    // {
    //     if (i > 5)
    //         break;
    //     cout << i << " ";
    //     i++;
    // }

    /// nesting in while loop

    // int i = 1;
    // while (i <= 5)
    // {

    //     int j = 1;
    //     while (j <= 4)
    //     {
    //         cout << j << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // for (int i = 1; i <= 5; i++)
    // {
    //     cout << i << " ";
    //     if (i == 2)
    //     {
    //         continue;
    //     }
    //     cout << "hello" << " ";
    //     cout << endl;
    // }

    // for (int i = 1; i <= 5; i++)
    // {
    //     cout << i << " ";
    //     if (i == 2)
    //     {
    //         break;
    //     }
    //     cout << "hello" << " ";
    //     cout << endl;
    // }

    int i = 1;
    while (i <= 5)
    {
        if (i == 3)
        {
            i++;
            continue;
        }
        cout << i << " ";
        i++;
    }
}