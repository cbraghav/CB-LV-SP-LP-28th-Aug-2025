#include <bits/stdc++.h>

using namespace std;

// TC O(N)
// SC O(N)
int BF()
{

    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> ans(v.size());
    for (int x : v)
        cout << x << " ";
    cout << endl;
    for (int i = 1; i < v.size(); i++)
    {
        ans[i - 1] = v[i];
    }
    ans[v.size() - 1] = v[0];

    for (int x : ans)
        cout << x << " ";
    cout << endl;
}

// TC O(N)
// SC O(1)
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    for (int x : v)
        cout << x << " ";
    cout << endl;

    int temp = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        v[i - 1] = v[i];
    }
    v[v.size() - 1] = temp;
    for (int x : v)
        cout << x << " ";
    cout << endl;
}