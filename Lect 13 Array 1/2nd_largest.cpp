#include <bits/stdc++.h>

using namespace std;

int main()
{

    int arr[] = {8, 4, 3, 9, 9, 8, 1, 2};
    int L1 = INT_MIN;
    int L2 = INT_MIN;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > L1)
        {

            L2 = L1;
            L1 = arr[i];
        }
        else if (arr[i] != L1 && arr[i] > L2)
        {
            L2 = arr[i];
        }
    }

    cout << "largest is " << L1 << " and second largest is " << L2 << endl;
}