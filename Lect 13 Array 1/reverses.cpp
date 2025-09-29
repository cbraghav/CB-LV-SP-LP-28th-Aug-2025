#include <bits/stdc++.h>

using namespace std;

int main()
{
    // O(N) time and O(N) space;
    // int arr[] = {1, 3, 12, 31, 4, 1, 6, 5, 1};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // int n = arr.size();

    // stack<int> st;
    // for (int i = 0; i < n; i++)
    // {
    //     st.push(arr[i]);
    // }
    // while (st.size())
    // {
    //     cout << st.top() << " ";
    //     st.pop();
    // }

    // int rarr[n]{};

    // int i = 0;
    // int j = n - 1;
    // while (i < n)
    // {
    //     rarr[j] = arr[i];
    //     i++;
    //     j--;
    // }

    // for (int i = 0; i < n; i++)
    //     cout << arr[i] << " ";
    // cout << endl;

    // for (int i = 0; i < n; i++)
    //     cout << rarr[i] << " ";
    // cout << endl;

    int arr[] = {1, 3, 12, 31, 4, 1, 6, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int i = 0;
    int j = n - 1;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // while (i < n)
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}