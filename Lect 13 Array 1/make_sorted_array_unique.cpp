#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Vecotr - > O(N) Time and O(N) space
    // Set -> O(N* logN) time and O(N) space
    int arr[] = {1, 2, 3, 3, 5, 6, 9, 9, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v;
    // v.push_back(arr[0]);
    // for (int i = 1; i < n; i++)
    for (int i = 0; i < n; i++)
    {
        if (v.size() > 0 && arr[i] == *v.rbegin())
        {
            continue;
        }
        v.push_back(arr[i]);
    }

    for (auto i : v)
        cout << i << " ";
}