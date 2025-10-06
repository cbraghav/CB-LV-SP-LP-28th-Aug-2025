#include <bits/stdc++.h>

using namespace std;

// Q -> there are 2*N + 1 elemnts in array
// N elements are twice
// 1 element is single time

// find that element which appears only  1 time

int BF1()
{

    vector<int> v = {2, 3, 4, 3, 1, 2, 1};
    int N = 3;
    int n = v.size();
    // Sol 1 .
    // assume ith element is ans and verify cnt
    // TC O(N^2)
    // SC O(1)
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;

        for (int j = 0; j < n; j++)
        {
            if (v[j] == v[i])
                cnt++;
        }
        if (cnt == 1)
        {
            cout << v[i] << endl;
            return 0;
        }
    }

    cout << "answer not found" << endl;
    return 0;
}

int O1()
{
    vector<int> v = {2, 3, 4, 3, 4, 2, 1};
    int N = 3;
    int n = v.size();

    map<int, int> freq;

    // TC -> O(NLog(N))
    // SC -> O(N)
    for (auto x : v)
    {
        freq[x]++;
    }

    for (auto x : freq)
    {
        if (x.second == 1)
        {
            cout << x.first << endl;
            return 0;
        }
    }
    cout << "answer not found" << endl;
    return 0;
}

int main()
{
    vector<int> v = {3, 1, 4, 3, 4, 2, 1};
    int N = 3;
    int n = v.size();
    // TC O(N)
    // SC O(1)
    int xr = 0;
    for (auto x : v)
    {
        xr = xr ^ x;
    }
    cout << xr << endl;
}