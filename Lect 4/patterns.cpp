#include <bits/stdc++.h>

using namespace std;

int main()
{

    // cout << 1 ;

    // 1 2 3 4
    // line
    // for (int j = 1; j <= 4; j++)
    // {
    //     cout << j << " ";
    // }

    /*
    1
    2
    3
    4
    */
    // for (int j = 1; j <= 4; j++)
    // {
    //     cout << j << endl;
    // }

    // 1 2 3 4
    // 1 2 3 4
    // int row_count = 5;
    // int col_count = 8;
    // for (int i = 1; i <= row_count; i++)
    // {
    //     for (int j = 1; j <= col_count; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    /*
    1 1 1 1 1
    2 2 2 2 2
    3 3 3 3 3
    4 4 4 4 4
    5 5 5 5 5
    */

    // int row_count = 7;
    // int col_count = 7;
    // for (int i = 1; i <= row_count; i++)
    // {
    //     for (int j = 1; j <= col_count; j++)
    //     {
    //         int data = i;
    //         cout << data << " ";
    //     }
    //     cout << endl;
    // }

    /*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
    */
    // int row_count = 5;
    // for (int i = 1; i <= row_count; i++)
    // {
    //     int col_count = i;
    //     for (int j = 1; j <= col_count; j++)
    //     {
    //         int data = i;
    //         cout << data << " ";
    //     }
    //     cout << endl;
    // }

    /*
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
*/
    // int row_count = 5;
    // for (int i = 1; i <= row_count; i++)
    // {
    //     int col_count = i;
    //     for (int j = 1; j <= col_count; j++)
    //     {
    //         int data = j;
    //         cout << data << " ";
    //     }
    //     cout << endl;
    // }

    // int n = 5;
    // int row_count = n;
    // for (int i = 1; i <= row_count; i++)
    // {
    //     int col_count = n - i + 1; // ( n +1 ) - i
    //     for (int j = 1; j <= col_count; j++)
    //     {
    //         int data = j;
    //         cout << data << " ";
    //     }
    //     cout << endl;
    // }

    /*
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
6 5 4 3 2 1
7 6 5 4 3 2 1
    */
    // int n = 7;
    // int row_count = n;
    // for (int i = 1; i <= row_count; i++)
    // {
    //     // int col_count = i;
    //     // for (int j = 1; j <= col_count; j++)
    //     // {
    //     //     int data = i - j + 1;
    //     //     cout << data << " ";
    //     // }
    //     // cout << endl;
    //     int col_count = i;
    //     for (int j = col_count; j >= 1; j--)
    //         cout << j << " ";

    //     cout << endl;
    // }

    /*

    This is 1

    if (){
        st 1
        st 2
        }

    This is also 1
    if()
        st 1


    if(){
        st 1
    }
    st2


    if()
        st 1
    st 2
    */

    /*
            1
          1 2
        1 2 3
      1 2 3 4
    1 2 3 4 5
  1 2 3 4 5 6
1 2 3 4 5 6 7
    */
    // int row_count = 7;
    // for (int i = 1; i <= row_count; i++)
    // {
    //     int c_cnt1 = row_count - i;
    //     for (int j = 1; j <= c_cnt1; j++)
    //     {
    //         cout << " " << " ";
    //     }
    //     int c_cnt2 = i;
    //     for (int j = 1; j <= c_cnt2; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    /*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
    */
    // int n = 5;
    // int r_cnt = n;
    // for (int i = 1; i <= r_cnt; i++)
    // {
    //     int c_cnt = i;
    //     for (int j = 1; j <= c_cnt; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    // for (int i = r_cnt - 1; i >= 1; i--)
    // {
    //     int c_cnt = i;
    //     for (int j = 1; j <= c_cnt; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    //     int n = 7;
    // int r_cnt = n;
    // for (int i = 1; i <= 2 * r_cnt - 1; i++)
    // {
    //     int c_cnt = i;
    //     if (i >= r_cnt)
    //     {
    //         c_cnt = 2 * n - i;
    //     }
    //     for (int j = 1; j <= c_cnt; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
}
