#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 3, 5, 2, 8, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool is_sorted = true;

    for (int i = 1; i < n; i++)
    {
        // if (arr[i] >= arr[i - 1])
        // {
        // }
        // else
        // {
        //     is_sorted = false;
        //     break;
        // }
        if (arr[i] < arr[i - 1])
        {
            is_sorted = false;
            break;
        }
    }

    if (is_sorted == true)
    {
        cout << " array is sorted" << endl;
    }
    else
    {
        cout << " array is not sorted" << endl;
    }
}