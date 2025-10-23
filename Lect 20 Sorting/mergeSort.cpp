#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &v, int L, int Mid, int R)
{
    int n = Mid + 1;
    int m = R + 1;

    int p1 = L;
    int p2 = Mid + 1;

    //    vector<int> temp(v.size());
    //     int p3 = p1;
    vector<int> ans;
    while (p1 < n && p2 < m)
    {
        if (v[p1] <= v[p2])
        {
            ans.push_back(v[p1]);
            p1++;
        }
        else
        {
            ans.push_back(v[p2]);
            p2++;
        }
    }

    while (p1 < n)
    {
        ans.push_back(v[p1]);
        p1++;
    }

    while (p2 < m)
    {
        ans.push_back(v[p2]);
        p2++;
    }

    for (int i = 0; i < ans.size(); i++)
    {
        v[L + i] = ans[i];
    }
}
// void MergeSort(vector<int> &v, int L, int R)
// {
//     if (L >= R)
//     {
//         // cout << v[L] << endl;
//         return;
//     }

//     // Recursion
//     int mid = (L + R) / 2;
//     MergeSort(v, L, mid);
//     MergeSort(v, mid + 1, R);
//     merge(v, L, mid, R);
//     // for (auto i : v)
//     // {
//     //     cout << i << " ";
//     // }
//     // cout << endl;
// }

void MergeSortIterative(vector<int> &v)
{
    int n = v.size();

    for (int sz = 1; sz < n; sz = sz * 2)
    {

        for (int left = 0; left < n - 1; left = left + 2 * sz)
        {
            int mid = min(n - 1, left + sz - 1);
            int right = min(n - 1, left + 2 * sz - 1);
            merge(v, left, mid, right);
        }
    }
}

int main()
{

    vector<int> v = {5, 2, 9, 10, 11, 15, 1, 3, 4, 6, 7};
    int n = v.size();

    // MergeSort(v, 0, n - 1);
    MergeSortIterative(v);
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}